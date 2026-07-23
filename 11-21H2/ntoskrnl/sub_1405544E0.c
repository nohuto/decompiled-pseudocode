/*
 * XREFs of sub_1405544E0 @ 0x1405544E0
 * Callers:
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 *     sub_14055CC5C @ 0x14055CC5C (sub_14055CC5C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140553164 @ 0x140553164 (sub_140553164.c)
 *     sub_140554BC4 @ 0x140554BC4 (sub_140554BC4.c)
 *     sub_140567038 @ 0x140567038 (sub_140567038.c)
 */

char __fastcall sub_1405544E0(int a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rdi
  int v4; // esi
  __int128 v6; // [rsp+40h] [rbp-58h] BYREF
  __int128 v7; // [rsp+50h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  char v9; // [rsp+A8h] [rbp+10h] BYREF
  __int64 *v10; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+20h]

  v1 = &retaddr;
  v6 = 0LL;
  v7 = 0LL;
  v3 = qword_140C2B800;
  v10 = &qword_140C2B800;
  while ( 1 )
  {
    v11 = v3;
    if ( (__int64 *)v3 == &qword_140C2B800 )
      break;
    LOBYTE(v1) = sub_140567038(v3, 6LL, &v10);
    if ( (_BYTE)v1 )
    {
      *(_QWORD *)&v6 = 0LL;
      HIDWORD(v6) = a1;
      v4 = 0;
      do
      {
        v7 = 0uLL;
        DWORD2(v6) = 0;
        v9 = 0;
        sub_14042A5E0(6LL, v3);
        if ( v4 >= 0 )
        {
          if ( *((_QWORD *)&v7 + 1) )
            v4 = sub_140554BC4(&v6, &v9);
        }
      }
      while ( v9 );
      LOBYTE(v1) = (v4 < 0) + 3;
      *(_BYTE *)(v3 + 44) = (_BYTE)v1;
    }
    else if ( !v10 )
    {
      return (char)v1;
    }
    v3 = *(_QWORD *)v3;
  }
  return (char)v1;
}
