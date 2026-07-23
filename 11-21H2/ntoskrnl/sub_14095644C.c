/*
 * XREFs of sub_14095644C @ 0x14095644C
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_14078A584 @ 0x14078A584 (sub_14078A584.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     sub_140A237D0 @ 0x140A237D0 (sub_140A237D0.c)
 */

__int64 __fastcall sub_14095644C(unsigned __int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // r15
  char v7; // bl
  int v10; // edi
  int v11; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v14; // [rsp+68h] [rbp+7h] BYREF
  int v15; // [rsp+6Ch] [rbp+Bh] BYREF
  __int128 v16; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+2Fh]

  v6 = a6;
  v7 = 0;
  LOBYTE(a6) = 0;
  v14 = 0;
  v15 = 0;
  *v6 = 0;
  v16 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v10 = sub_14078A1A8(a1, a2, a5, (__int64)&v16);
  if ( v10 >= 0 )
  {
    if ( sub_14078A600(2u) )
    {
      if ( (_QWORD)v17 && *(_QWORD *)((char *)&v16 + 4) == 0x400000000LL && !HIDWORD(v17) && a3 && a4 >= 8 )
      {
        v11 = sub_14077DA5C(
                *(__int64 *)&qword_140D00AC0,
                v17,
                3,
                0,
                0LL,
                (__int64)&qword_14000EB88,
                (__int64)&v14,
                (__int64)&a6,
                1,
                (__int64)&v15,
                0);
        if ( v11 >= 0 )
        {
          if ( v14 == 17 && v15 == 1 )
            v7 = (char)a6;
          else
            LOBYTE(a6) = 0;
          if ( v7 == -1 )
          {
            v11 = -1073740024;
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            --*((_WORD *)CurrentThread + 242);
            ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
            v11 = sub_140A237D0(*(_QWORD *)&qword_140D00AC0, v17, 0LL);
            ExReleaseResourceLite(&stru_140C462A0);
            sub_1402F9540((__int64)KeGetCurrentThread());
          }
        }
      }
      else
      {
        v11 = -1073741811;
      }
    }
    else
    {
      v11 = -1073741790;
    }
    v10 = sub_14078A584(v11, v18, a3, a4, v6);
  }
  sub_1406BACAC((__int64)&v16);
  return (unsigned int)v10;
}
