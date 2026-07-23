/*
 * XREFs of sub_140825E70 @ 0x140825E70
 * Callers:
 *     sub_140827E8C @ 0x140827E8C (sub_140827E8C.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     sub_1402201F8 @ 0x1402201F8 (sub_1402201F8.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_140825FD0 @ 0x140825FD0 (sub_140825FD0.c)
 *     sub_140826000 @ 0x140826000 (sub_140826000.c)
 *     sub_140827888 @ 0x140827888 (sub_140827888.c)
 *     sub_140A22DB0 @ 0x140A22DB0 (sub_140A22DB0.c)
 */

__int64 __fastcall sub_140825E70(unsigned int a1)
{
  int v2; // ebx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r9d
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( a1 )
    return (unsigned int)sub_140826000(a1);
  qword_140C45698 = (__int64)&qword_140C45690;
  qword_140C45690 = (__int64)&qword_140C45690;
  v2 = ExInitializeResourceLite(&stru_140C45620);
  if ( v2 >= 0 )
  {
    v2 = ExInitializeResourceLite(&stru_140C456A0);
    if ( v2 >= 0 )
    {
      v2 = sub_140827888(v4, 0, v5, 0);
      if ( v2 >= 0 )
      {
        if ( !sub_1402201F8()
          || (*(_QWORD *)&qword_140D00AC0 ? (v11 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) : (v11 = 0LL),
              (int)sub_14077FFEC(v11, 2147483650LL, (__int64)L"DEVICES", 0, 0x2000000u, (__int64)&Handle) < 0
           || (v2 = sub_140A22DB0(v6, (unsigned int)L"DEVICES", 2, v12, (__int64)Handle), ZwClose(Handle), v2 >= 0)) )
        {
          v2 = sub_140825FD0(v6, 1LL, sub_1406CE680);
          if ( v2 >= 0 )
          {
            v2 = sub_140825FD0(v7, 2LL, sub_1406C13B0);
            if ( v2 >= 0 )
            {
              v2 = sub_140825FD0(v8, 3LL, sub_1406CDA50);
              if ( v2 >= 0 )
              {
                v2 = sub_140825FD0(v9, 4LL, sub_1406E7910);
                if ( v2 >= 0 )
                {
                  v2 = sub_140825FD0(v10, 5LL, sub_1406C2770);
                  if ( v2 >= 0 )
                  {
                    _InterlockedExchange64(
                      (volatile __int64 *)(*(_QWORD *)&qword_140D00AC0 + 488LL),
                      (__int64)sub_14077AA70);
                    _InterlockedExchange64(
                      (volatile __int64 *)(*(_QWORD *)&qword_140D00AC0 + 504LL),
                      (__int64)sub_140779F10);
                    _InterlockedExchange64(
                      (volatile __int64 *)(*(_QWORD *)&qword_140D00AC0 + 496LL),
                      (__int64)sub_140778800);
                    return (unsigned int)sub_140826000(a1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
