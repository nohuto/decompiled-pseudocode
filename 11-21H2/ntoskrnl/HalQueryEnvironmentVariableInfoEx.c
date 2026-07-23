/*
 * XREFs of HalQueryEnvironmentVariableInfoEx @ 0x140508620
 * Callers:
 *     sub_14093F6D0 @ 0x14093F6D0 (sub_14093F6D0.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14050FFFC @ 0x14050FFFC (sub_14050FFFC.c)
 */

__int64 __fastcall HalQueryEnvironmentVariableInfoEx(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // bl
  unsigned int v9; // edi
  unsigned int v10; // edx
  unsigned int v11; // edi
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !byte_140C4BFC8 )
    return 3221225474LL;
  v8 = 1;
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  v9 = a1 | 6;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v8 = 0;
  }
  else
  {
    v10 = dword_140D0E5E0[HIDWORD(KeGetPcr()[1].LockArray)];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v10 >> 6);
    Affinity.Mask = 1LL << (v10 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  v11 = sub_14050FFFC(v9, a2, a3, a4);
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v11;
}
