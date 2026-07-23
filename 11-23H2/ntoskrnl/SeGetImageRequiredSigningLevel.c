/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x1406AA89C
 * Callers:
 *     MiValidateExistingImage @ 0x1406AA324 (MiValidateExistingImage.c)
 *     MiCreateNewSection @ 0x1407466E0 (MiCreateNewSection.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x140200EE0 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(PVOID Object, __int64 a2, __int64 a3, char a4, char *a5)
{
  unsigned int v5; // esi
  char v6; // bl
  PVOID v7; // rbp
  char v8; // di
  _KPROCESS *Process; // rcx
  char v11; // cl
  char v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+31h] [rbp-17h] BYREF
  BOOLEAN IsUntrustedObject[22]; // [rsp+32h] [rbp-16h] BYREF

  v5 = 0;
  v6 = a3;
  v7 = Object;
  v12 = 0;
  v13 = 0;
  IsUntrustedObject[0] = 0;
  if ( qword_140C379B0 )
    return (unsigned int)((__int64 (__fastcall *)(PVOID, __int64, __int64))qword_140C379B0)(Object, a2, a3);
  v8 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v8 = SeILSigningPolicyRuntime;
  if ( v8 == 2 && !(_BYTE)a3 )
  {
    *a5 = 2;
    return v5;
  }
  if ( (_BYTE)a3 == 2 )
  {
    if ( !v8 )
    {
      *a5 = 0;
      return v5;
    }
  }
  else if ( !(_BYTE)a3 )
  {
LABEL_11:
    *a5 = v6;
    return v5;
  }
  if ( (a2 & 0x10) != 0 )
    goto LABEL_11;
  if ( qword_140C37980 )
  {
    LOBYTE(a2) = a3;
    LOBYTE(Object) = a4;
    if ( (unsigned int)qword_140C37980(Object, a2) )
      goto LABEL_11;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (BYTE2(Process[2].Header.WaitListHead.Flink) & 7) != 0 || v6 != 6 )
    goto LABEL_11;
  if ( ((__int64)Process[2].ReadyListHead.Blink & 0x800000) != 0 )
    goto LABEL_21;
  if ( !qword_140C37978 )
    return (unsigned int)-1073741823;
  v5 = qword_140C37978(v7, &v12, &v13);
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( !v12 && !v13 )
    {
      v5 = RtlIsUntrustedObject(0LL, v7, IsUntrustedObject);
      if ( (v5 & 0x80000000) != 0 )
        return v5;
      if ( !IsUntrustedObject[0] )
      {
        if ( (unsigned __int8)v8 < 2u )
        {
          *a5 = 0;
        }
        else
        {
          v11 = 9;
          if ( v8 != 2 )
            v11 = 6;
          *a5 = v11;
        }
        return v5;
      }
    }
LABEL_21:
    *a5 = 6;
  }
  return v5;
}
