/*
 * XREFs of sub_140764BA0 @ 0x140764BA0
 * Callers:
 *     WbDecryptWarbirdEncryptionSegment @ 0x1407D2DC0 (WbDecryptWarbirdEncryptionSegment.c)
 * Callees:
 *     ApplyRelocations @ 0x1402FB650 (ApplyRelocations.c)
 *     ZwFlushInstructionCache @ 0x14041C480 (ZwFlushInstructionCache.c)
 *     sub_140764104 @ 0x140764104 (sub_140764104.c)
 *     sub_140764384 @ 0x140764384 (sub_140764384.c)
 *     sub_140764E70 @ 0x140764E70 (sub_140764E70.c)
 *     sub_1407D94A8 @ 0x1407D94A8 (sub_1407D94A8.c)
 */

__int64 __fastcall sub_140764BA0(__int64 *a1, int a2, _DWORD *a3)
{
  void *v6; // rbp
  int v7; // ebx
  char *v8; // r15
  __int64 v10; // [rsp+38h] [rbp-50h]
  PMDL Mdl; // [rsp+50h] [rbp-38h] BYREF
  char v12; // [rsp+98h] [rbp+10h] BYREF
  char *v13; // [rsp+A8h] [rbp+20h] BYREF

  v13 = 0LL;
  Mdl = 0LL;
  v12 = 0;
  if ( a2 && (*a3 & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = (void *)(a1[4] + (a3[1] & 0xFFFFFFF));
    v7 = sub_140764104(v6, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0);
    if ( v7 >= 0 )
    {
      v7 = sub_140764E70((_DWORD)v6, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0, (unsigned int)&Mdl, (__int64)&v13);
      if ( v7 >= 0 )
      {
        v8 = v13;
        if ( !a2
          || (v7 = ApplyRelocations(
                     a1[5],
                     *(_DWORD *)(a1[7] + 48),
                     a1[4],
                     *(_QWORD *)(a1[7] + 56) - a1[4],
                     (__int64)v6,
                     (__int64)v13,
                     a3[2] & 0xFFFFFFF),
              v7 >= 0) )
        {
          v7 = sub_140764384(
                 0,
                 (char *)v6,
                 v8,
                 a3[2] & 0xFFFFFFF,
                 (__int64 *)(a1[7] + 72),
                 a3[1] & 0xFFFFFFF,
                 (__int128 *)(a1[7] + 80),
                 v10,
                 &v12);
          if ( v7 >= 0 )
          {
            if ( !a2
              || (v7 = ApplyRelocations(
                         a1[5],
                         *(_DWORD *)(a1[7] + 48),
                         a1[4],
                         a1[4] - *(_QWORD *)(a1[7] + 56),
                         (__int64)v6,
                         (__int64)v8,
                         a3[2] & 0xFFFFFFF),
                  v7 >= 0) )
            {
              v7 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6, a3[2] & 0xFFFFFFF);
            }
          }
        }
      }
    }
  }
  sub_1407D94A8(Mdl);
  return (unsigned int)v7;
}
