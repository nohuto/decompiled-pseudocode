/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x140687240
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x14031D010 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406874D0 (ExGetFirmwareEnvironmentVariable.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406875CC (ExpGetFirmwareEnvironmentVariable.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x14077F59C (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC894 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtQuerySystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        PULONG ValueLength,
        PULONG Attributes)
{
  BOOLEAN v10; // bl
  __int64 v11; // rbx
  unsigned __int16 v12; // ax
  char *v13; // rdx
  __int64 v14; // rcx
  ULONG v15; // eax
  unsigned __int64 v16; // rbx
  _WORD *Pool2; // rax
  _WORD *v18; // rsi
  NTSTATUS FirmwareEnvironmentVariable; // ebx
  NTSTATUS v20; // eax
  BOOLEAN v21; // cl
  BOOLEAN IsMember[4]; // [rsp+30h] [rbp-98h] BYREF
  ULONG v23; // [rsp+34h] [rbp-94h] BYREF
  int v24; // [rsp+38h] [rbp-90h]
  PVOID P; // [rsp+40h] [rbp-88h]
  ULONG v26; // [rsp+48h] [rbp-80h] BYREF
  __m128i Src; // [rsp+50h] [rbp-78h]
  GUID v28; // [rsp+70h] [rbp-58h] BYREF

  Src = 0LL;
  P = 0LL;
  v28 = 0LL;
  v23 = 0;
  v26 = 0;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExGetFirmwareEnvironmentVariable(
             (_DWORD)VariableName,
             (_DWORD)VendorGuid,
             (_DWORD)Value,
             (_DWORD)ValueLength,
             (__int64)Attributes);
  v10 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( !v10 )
  {
    if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      v10 = ExpFirmwareAccessAppContainerCheck(1LL);
    if ( !v10 )
    {
      IsMember[0] = 0;
      v20 = RtlCheckTokenMembershipEx(0LL, SeExports->SeUserModeDriversSid, 0, IsMember);
      v21 = IsMember[0];
      if ( v20 < 0 )
        v21 = 0;
      IsMember[0] = v21;
      if ( !v21 )
      {
        FirmwareEnvironmentVariable = -1073741727;
        goto LABEL_39;
      }
    }
  }
  if ( dword_140C31AF0 != 2 )
  {
    FirmwareEnvironmentVariable = -1073741822;
LABEL_39:
    v18 = P;
    goto LABEL_35;
  }
  if ( ((unsigned __int8)VariableName & 3) != 0 )
LABEL_27:
    ExRaiseDatatypeMisalignment();
  v11 = 0x7FFFFFFF0000LL;
  Src = *(__m128i *)VariableName;
  v12 = _mm_cvtsi128_si32(Src);
  if ( v12 )
  {
    if ( (Src.m128i_i8[8] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (char *)(Src.m128i_i64[1] + v12);
    if ( (unsigned __int64)v13 > 0x7FFFFFFF0000LL || (unsigned __int64)v13 < Src.m128i_i64[1] )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( ((unsigned __int8)VendorGuid & 3) == 0 )
    {
      v14 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ValueLength < 0x7FFFFFFF0000LL )
        v14 = (__int64)ValueLength;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      v15 = *ValueLength;
      v23 = *ValueLength;
      if ( !Value )
      {
        v23 = 0;
        v15 = 0;
      }
      if ( v15 )
        ProbeForWrite(Value, v15, 1u);
      if ( Attributes )
      {
        if ( (unsigned __int64)Attributes < 0x7FFFFFFF0000LL )
          v11 = (__int64)Attributes;
        *(_DWORD *)v11 = *(_DWORD *)v11;
      }
      v28 = *VendorGuid;
      v16 = Src.m128i_u16[0];
      Pool2 = (_WORD *)ExAllocatePool2(64LL, Src.m128i_u16[0] + 2LL, 1920364101LL);
      v18 = Pool2;
      P = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, (const void *)Src.m128i_i64[1], (unsigned int)v16);
        v18[v16 >> 1] = 0;
        FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable(
                                        (_DWORD)v18,
                                        (unsigned int)&v28,
                                        (_DWORD)Value,
                                        (unsigned int)&v23,
                                        (__int64)&v26,
                                        1);
        v24 = FirmwareEnvironmentVariable;
        if ( (int)(FirmwareEnvironmentVariable + 0x80000000) < 0 || FirmwareEnvironmentVariable == -1073741789 )
          *ValueLength = v23;
        if ( Attributes && FirmwareEnvironmentVariable >= 0 )
          *Attributes = v26;
      }
      else
      {
        FirmwareEnvironmentVariable = -1073741670;
        v24 = -1073741670;
      }
      goto LABEL_35;
    }
    goto LABEL_27;
  }
  FirmwareEnvironmentVariable = -1073741819;
  v24 = -1073741819;
  v18 = P;
LABEL_35:
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return FirmwareEnvironmentVariable;
}
