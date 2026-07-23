/*
 * XREFs of sub_14070EE70 @ 0x14070EE70
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall sub_14070EE70(__int128 *a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // xmm1_8
  int v5; // r11d
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  char v8; // r10
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // dl
  __int64 v11; // r8
  unsigned __int64 result; // rax
  __int64 v13; // xmm1_8
  __int128 v14; // [rsp+0h] [rbp-68h]
  __int64 v15; // [rsp+10h] [rbp-58h]
  __int128 v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp-18h]

  v3 = *((_QWORD *)a1 + 2);
  v18 = 0LL;
  v5 = 0;
  v16 = *a1;
  v6 = *a2;
  v17 = v3;
  v7 = *((_QWORD *)a2 + 2);
  v14 = v6;
  v19 = 0LL;
  v15 = v7;
  do
  {
    v8 = (4 * v5) & 0x3F;
    v9 = (unsigned __int64)(unsigned int)(4 * v5) >> 6;
    v10 = (*((_QWORD *)&v14 + v9) >> v8) & 3;
    v11 = (*((_QWORD *)&v16 + v9) >> v8) & 3LL;
    if ( ((*((_QWORD *)&v16 + v9) >> v8) & 3) == 0 )
    {
LABEL_3:
      if ( ((v10 - 1) & 0xFD) != 0 )
        goto LABEL_4;
LABEL_6:
      LODWORD(v11) = v10;
      goto LABEL_4;
    }
    switch ( (_DWORD)v11 )
    {
      case 1:
        goto LABEL_10;
      case 2:
        goto LABEL_3;
      case 3:
LABEL_10:
        if ( v10 == 2 )
          goto LABEL_6;
        break;
    }
LABEL_4:
    result = (unsigned __int64)(unsigned int)v11 << v8;
    ++v5;
    *((_QWORD *)&v18 + v9) = result | *((_QWORD *)&v18 + v9) & ~(15LL << v8);
  }
  while ( v5 < 39 );
  v13 = v19;
  *(_OWORD *)a3 = v18;
  *(_QWORD *)(a3 + 16) = v13;
  return result;
}
