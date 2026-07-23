/*
 * XREFs of sub_140A4DE34 @ 0x140A4DE34
 * Callers:
 *     WbDecryptWarbirdEncryptionSegment @ 0x1407D2DC0 (WbDecryptWarbirdEncryptionSegment.c)
 * Callees:
 *     ApplyRelocations @ 0x1402FB650 (ApplyRelocations.c)
 *     ZwFlushInstructionCache @ 0x14041C480 (ZwFlushInstructionCache.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     sub_140764104 @ 0x140764104 (sub_140764104.c)
 *     sub_140764384 @ 0x140764384 (sub_140764384.c)
 *     sub_140764E70 @ 0x140764E70 (sub_140764E70.c)
 *     sub_1407D94A8 @ 0x1407D94A8 (sub_1407D94A8.c)
 */

__int64 __fastcall sub_140A4DE34(__int64 *a1, int a2, _DWORD *a3)
{
  int v6; // ebx
  void *v7; // r14
  _DWORD *v8; // rsi
  __int64 v10; // [rsp+38h] [rbp-50h]
  PMDL Mdl[2]; // [rsp+50h] [rbp-38h] BYREF
  char v12; // [rsp+98h] [rbp+10h] BYREF
  void *v13; // [rsp+A8h] [rbp+20h] BYREF

  v13 = 0LL;
  Mdl[0] = 0LL;
  v12 = 0;
  if ( a2 && (*a3 & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v7 = (void *)(a1[4] + (a3[1] & 0xFFFFFFF));
    v6 = sub_140764104(v7, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0);
    if ( v6 >= 0 )
    {
      v6 = sub_140764E70(v7, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0, (__int64)Mdl, (__int64)&v13);
      if ( v6 >= 0 )
      {
        v8 = v13;
        if ( !a2
          || (v6 = ApplyRelocations(
                     a1[5],
                     *(_DWORD *)(a1[7] + 48),
                     a1[4],
                     *(_QWORD *)(a1[7] + 56) - a1[4],
                     (__int64)v7,
                     (__int64)v13,
                     a3[2] & 0xFFFFFFF),
              v6 >= 0) )
        {
          memmove(v8, v7, a3[2] & 0xFFFFFFF);
          if ( (*a3 & 2) == 0 )
          {
            if ( (a3[2] & 0xFFFFFFFu) < 4 )
            {
              v6 = -1073741811;
              goto LABEL_16;
            }
            *v8 = a3[3];
          }
          v6 = sub_140764384(
                 0,
                 (char *)v8,
                 (char *)v8,
                 a3[2] & 0xFFFFFFF,
                 (__int64 *)(a1[7] + 72),
                 a3[1] & 0xFFFFFFF,
                 (__int128 *)(a1[7] + 80),
                 v10,
                 &v12);
          if ( v6 >= 0 )
          {
            if ( !a2
              || (v6 = ApplyRelocations(
                         a1[5],
                         *(_DWORD *)(a1[7] + 48),
                         a1[4],
                         a1[4] - *(_QWORD *)(a1[7] + 56),
                         (__int64)v7,
                         (__int64)v8,
                         a3[2] & 0xFFFFFFF),
                  v6 >= 0) )
            {
              v6 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7, a3[2] & 0xFFFFFFF);
            }
          }
        }
      }
    }
  }
LABEL_16:
  sub_1407D94A8(Mdl[0]);
  return (unsigned int)v6;
}
