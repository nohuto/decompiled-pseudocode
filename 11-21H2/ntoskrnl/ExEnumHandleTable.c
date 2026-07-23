/*
 * XREFs of ExEnumHandleTable @ 0x14066A8E0
 * Callers:
 *     sub_140558960 @ 0x140558960 (sub_140558960.c)
 *     ObFindHandleForObject @ 0x14066A830 (ObFindHandleForObject.c)
 *     sub_1406A6448 @ 0x1406A6448 (sub_1406A6448.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_140939830 @ 0x140939830 (sub_140939830.c)
 *     sub_140946508 @ 0x140946508 (sub_140946508.c)
 *     sub_140983EF0 @ 0x140983EF0 (sub_140983EF0.c)
 *     sub_1409EA9A0 @ 0x1409EA9A0 (sub_1409EA9A0.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14066B42C @ 0x14066B42C (sub_14066B42C.c)
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 *     sub_1407ED9FC @ 0x1407ED9FC (sub_1407ED9FC.c)
 */

__int64 __fastcall ExEnumHandleTable(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v5; // si
  signed __int64 *v8; // rdi
  signed __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // r9
  _QWORD v13[7]; // [rsp+30h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v13[0] = 0LL;
  --*((_WORD *)CurrentThread + 242);
  v8 = (signed __int64 *)sub_14066B42C(a1, 0LL, v13);
  if ( !v8 )
    goto LABEL_13;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        _m_prefetchw(v8);
        v9 = *v8;
        if ( (*v8 & 1) != 0 )
          break;
        if ( !v9 )
        {
          v10 = v13[0];
          goto LABEL_5;
        }
        sub_1407ED9FC(a1, v8, v9);
      }
    }
    while ( v9 != _InterlockedCompareExchange64(v8, v9 - 1, v9) );
    v10 = v13[0];
    v5 = sub_14042A5E0(a1, v8);
    if ( v5 )
      break;
LABEL_5:
    v11 = v10 + 4;
    if ( (v10 ^ (unsigned __int64)(v10 + 4)) >= 0x400 )
      v8 = (signed __int64 *)sub_140733340(a1, v10 + 8);
    else
      v8 += 2;
    v13[0] = v11;
    if ( !v8 )
      goto LABEL_13;
  }
  if ( a4 )
    *a4 = v10;
LABEL_13:
  sub_1402AC800((__int64)CurrentThread);
  return v5;
}
