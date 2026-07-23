/*
 * XREFs of sub_14079D08C @ 0x14079D08C
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_140983680 @ 0x140983680 (sub_140983680.c)
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 * Callees:
 *     sub_140248208 @ 0x140248208 (sub_140248208.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1402EB398 @ 0x1402EB398 (sub_1402EB398.c)
 *     sub_1402EB3DC @ 0x1402EB3DC (sub_1402EB3DC.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_1403C9C90 @ 0x1403C9C90 (sub_1403C9C90.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 */

__int64 __fastcall sub_14079D08C(ULONG_PTR *a1, __int64 a2, char a3)
{
  unsigned int v5; // r10d
  unsigned int v6; // edi
  __int16 v7; // ax
  __int64 result; // rax
  __int64 v9; // [rsp+70h] [rbp+27h] BYREF
  __int128 v10; // [rsp+78h] [rbp+2Fh] BYREF

  v10 = 0LL;
  sub_140339C20(0LL, 0, (__int64)&v10);
  v9 = -1LL;
  v6 = sub_1402EB3DC((__int64)&v10);
  if ( !(unsigned int)sub_1402EB398((__int64)a1, v5)
    || (result = sub_1402EB440((__int64)a1, 0, v6, 2, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, 0), v9 = result, result == -1) )
  {
    if ( (a3 & 1) != 0 )
    {
      return -1LL;
    }
    else if ( !dword_140C4F514
           || a1 != &StartContext
           || (result = sub_1403C9C90(&dword_140C4F510, (__int64)a1), v9 = result, result == -1) )
    {
      if ( (int)sub_140277D10(
                  (__int64)a1,
                  0LL,
                  qword_140C4F5D0,
                  0LL,
                  0,
                  1uLL,
                  1u,
                  0x80000000,
                  0x80000000,
                  1610612737,
                  0,
                  0LL,
                  &v9) < 0 )
      {
        qword_140C4F5D0 = -1LL;
        while ( 1 )
        {
          result = sub_1403250B0((__int64)a1, v6, 0);
          v9 = result;
          if ( result != -1 )
            break;
          if ( KeGetCurrentIrql() == 2 || (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 )
            return -1LL;
          sub_1405B8348(a1);
        }
      }
      else
      {
        v7 = ++qword_140C4F5C8;
        if ( a1 == &StartContext )
        {
          if ( (v7 & 0x1FF) != 0 )
            qword_140C4F5D0 = v9 - 1;
          else
            qword_140C4F5D0 = -1LL;
        }
        sub_140248208(48 * v9 - 0x220000000000LL, 0);
        return v9;
      }
    }
  }
  return result;
}
