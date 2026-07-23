/*
 * XREFs of sub_14028FA14 @ 0x14028FA14
 * Callers:
 *     sub_14028F978 @ 0x14028F978 (sub_14028F978.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_140291158 @ 0x140291158 (sub_140291158.c)
 *     sub_140291210 @ 0x140291210 (sub_140291210.c)
 *     sub_1403AD0A8 @ 0x1403AD0A8 (sub_1403AD0A8.c)
 *     sub_1403AD16C @ 0x1403AD16C (sub_1403AD16C.c)
 *     sub_1403AE6BC @ 0x1403AE6BC (sub_1403AE6BC.c)
 *     sub_1405A4C68 @ 0x1405A4C68 (sub_1405A4C68.c)
 *     sub_1405A4FB8 @ 0x1405A4FB8 (sub_1405A4FB8.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_14028FA14(char *BaseAddress, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  SIZE_T v6; // r13
  unsigned int v9; // r14d
  int v10; // r15d
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // edx
  unsigned int v14; // ebx
  __int64 v15; // r9
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v21; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v22[2]; // [rsp+28h] [rbp-70h] BYREF
  int v23; // [rsp+38h] [rbp-60h]
  unsigned int v24; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v25; // [rsp+40h] [rbp-58h]
  unsigned int v26; // [rsp+44h] [rbp-54h]
  _BYTE v27[40]; // [rsp+48h] [rbp-50h] BYREF

  v6 = a3;
  v9 = a5;
  v21 = 0LL;
  memset(v27, 0, 32);
  v26 = 0;
  if ( !a3 )
    return 3221225713LL;
  v10 = a5 & 2;
  if ( (a5 & 0x40) != 0 )
  {
    if ( (a5 & 2) != 0 )
      return 3221225714LL;
    if ( (a5 & 1) == 0 )
      return 3221225714LL;
    v12 = a5 & 4;
    v11 = 0LL;
    if ( (a5 & 4) == 0 )
      return 3221225714LL;
  }
  else
  {
    v11 = a5 & 2;
    v12 = a5 & 4;
  }
  v14 = (unsigned __int8)sub_140291158(0LL, v12, v11, a2, v21) != 0 ? 2 : 0;
  if ( !v16 )
  {
    if ( v13 )
    {
      if ( !(unsigned __int8)sub_14028FBF0(BaseAddress) )
        return (unsigned int)-1073741585;
      if ( (a5 & 0x40) == 0 )
        goto LABEL_8;
      PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
      BaseAddress = (char *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_1405A4C68)(
                              (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                              a5,
                              v27);
      if ( !BaseAddress )
        return (unsigned int)-1073741823;
      v9 = a5 | 2;
LABEL_8:
      v10 = v9 & 2;
      if ( dword_140D069F0 && (v9 & 2 | 4) == 4 )
        __asm { stac }
      if ( (v9 & 1) == 0 )
      {
LABEL_10:
        v17 = sub_140291210(a2, BaseAddress, (unsigned int)v6, a4);
LABEL_11:
        v18 = v17;
        goto LABEL_12;
      }
      BaseAddress = (char *)sub_1403AD16C(BaseAddress, &v21);
      if ( !BaseAddress )
      {
        v18 = -1073741585;
LABEL_12:
        if ( v14 < 2 && (v10 | 4) == 4 && dword_140D069F0 )
          __asm { clac }
        if ( (v14 & 1) != 0 )
          sub_1403AD0A8(BaseAddress, &v21, v9);
        if ( v10 )
          sub_1405A4FB8(v27);
        return v18;
      }
      v14 |= 1u;
LABEL_20:
      v17 = sub_1403AE6BC(BaseAddress, a2, (unsigned int)v6, a4);
      goto LABEL_11;
    }
    if ( KeGetCurrentIrql() <= 1u )
    {
      if ( (unsigned __int64)BaseAddress < 0xFFFF800000000000uLL )
      {
        if ( (a5 & 1) != 0 )
        {
          ProbeForWrite(BaseAddress, v6, v6);
        }
        else
        {
          if ( (((_DWORD)v6 - 1) & (unsigned int)BaseAddress) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&BaseAddress[v6] > 0x7FFFFFFF0000LL || &BaseAddress[v6] < BaseAddress )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        if ( (a5 & 1) == 0 )
          goto LABEL_10;
        goto LABEL_20;
      }
      v22[0] = BaseAddress;
      v23 = v6;
      v22[1] = v15;
      v24 = a4;
      v25 = a5;
      KeGenericCallDpc((__int64)sub_1405A47A0, (__int64)v22);
      return v26;
    }
    return 3221225714LL;
  }
  if ( !v13 && KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  BaseAddress = (char *)sub_1405A4C68(BaseAddress, a5, v27);
  if ( BaseAddress )
    goto LABEL_8;
  return 3221225473LL;
}
