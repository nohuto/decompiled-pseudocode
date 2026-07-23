/*
 * XREFs of sub_14061A090 @ 0x14061A090
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3C90 @ 0x1403A3C90 (sub_1403A3C90.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

__int64 __fastcall sub_14061A090(__int64 a1, char a2, ULONG a3, __int64 a4, __int64 a5, IRP *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rax
  __int64 *i; // rdi
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 *v20; // rbx
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h]
  __int128 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+70h] [rbp-10h]
  __int64 retaddr; // [rsp+A8h] [rbp+28h]

  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v12 = sub_140604844(383);
  if ( !v12 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v11 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v12 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v15 = *((_DWORD *)v12 + 3);
  if ( (v15 & 0x18) == 0 )
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v16 = sub_140628C98(v11, v10, v13, v14);
    goto LABEL_12;
  }
  v16 = retaddr;
LABEL_12:
  *(_QWORD *)&v21 = v16;
LABEL_13:
  *(_QWORD *)&v22 = a5;
  *((_QWORD *)&v21 + 1) = a6;
  *((_QWORD *)&v23 + 1) = a1;
  BYTE4(v23) = a2;
  LODWORD(v23) = a3;
  *((_QWORD *)&v22 + 1) = a4;
  for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v21, v10);
  }
LABEL_18:
  result = sub_1403A3C90(a1, a2, a3, a4, a5, 0, a6);
  LODWORD(v24) = result;
  if ( v12 )
  {
    v20 = (__int64 *)v12[6];
    if ( v20 != v12 + 6 )
    {
      do
      {
        if ( v20 != (__int64 *)16 )
          sub_14042A5E0(&v21, v19);
        v20 = (__int64 *)*v20;
      }
      while ( v20 != v12 + 6 );
      return (unsigned int)v24;
    }
  }
  return result;
}
