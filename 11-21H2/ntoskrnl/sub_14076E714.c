/*
 * XREFs of sub_14076E714 @ 0x14076E714
 * Callers:
 *     sub_140762C04 @ 0x140762C04 (sub_140762C04.c)
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_14084F808 @ 0x14084F808 (sub_14084F808.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 */

__int64 __fastcall sub_14076E714(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  unsigned int v9; // esi
  _QWORD *v10; // rdi
  int v11; // eax
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp-20h] BYREF

  P = 0LL;
  Handle = 0LL;
  v8 = sub_140779DC4(&P);
  if ( v8 >= 0 )
  {
    v8 = sub_14077C924(qword_140D00AC0, a1, a2, 7, 0, (__int64)&Handle);
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( a4 )
      {
        v10 = (_QWORD *)(a3 + 40);
        do
        {
          v11 = sub_140771524(
                  *(_QWORD *)&qword_140D00AC0,
                  a1,
                  a2,
                  Handle,
                  *(v10 - 2),
                  v10 - 5,
                  *((_DWORD *)v10 - 2),
                  *v10,
                  *((_DWORD *)v10 - 1),
                  0);
          v8 = v11;
          if ( v11 == -1073741275 )
          {
            if ( *((_DWORD *)v10 - 2) )
              break;
            v8 = 0;
          }
          else if ( v11 < 0 )
          {
            break;
          }
          ++v9;
          v10 += 6;
        }
        while ( v9 < a4 );
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    sub_140779A50(P);
  return (unsigned int)v8;
}
