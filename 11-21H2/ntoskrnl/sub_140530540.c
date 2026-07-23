/*
 * XREFs of sub_140530540 @ 0x140530540
 * Callers:
 *     sub_1405307FC @ 0x1405307FC (sub_1405307FC.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_1403CE24C @ 0x1403CE24C (sub_1403CE24C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140530540(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r12
  _BYTE *v4; // rsi
  int v5; // ebx
  _BYTE *v6; // rbp
  unsigned __int64 v7; // r12
  _BYTE *v8; // r15
  char v9; // r14
  _BYTE *v10; // rdi
  __int64 v12; // r11
  _BYTE *v13; // r10
  unsigned __int64 v14; // r8
  unsigned __int8 v15; // al
  unsigned __int8 v16; // r9
  __int64 v17; // rdx
  int v18; // ecx
  ULONG v19; // edx
  char v20; // al
  ULONG v21; // r8d
  char v22; // dl
  ULONG v23; // ebp
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rdi
  _QWORD *v27; // rcx
  ULONG v28; // edx
  _BYTE *v30; // [rsp+20h] [rbp-58h]
  __int64 v33; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 2);
  v4 = (_BYTE *)(a2 + 40);
  v5 = 0;
  v6 = 0LL;
  v33 = 0LL;
  v7 = a2 + v3;
  v8 = 0LL;
  v30 = 0LL;
  v9 = 0;
  *a3 = 0;
  v10 = a3;
  v12 = a1;
  if ( a2 + 40 < v7 )
  {
    while ( 1 )
    {
      v13 = v4;
      v14 = v7 - (_QWORD)v4;
      if ( (_BYTE *)v7 == v4 )
        return (unsigned int)-1073741811;
      if ( (unsigned __int8)(*(_BYTE *)a2 - 16) <= 1u )
      {
        if ( *v4 > 0x7Fu )
          return (unsigned int)-1073741811;
        v15 = *v4;
        v16 = *v4;
      }
      else
      {
        v15 = *v4;
        v16 = *v4;
        if ( *v4 == 0xF0 )
        {
          if ( v14 < 0x16 )
            return (unsigned int)-1073741811;
          v6 = v4;
          LODWORD(v17) = (unsigned __int8)v4[21] + 22;
          v30 = v4;
          goto LABEL_11;
        }
      }
      if ( v15 > 0x7Fu )
        return (unsigned int)-1073741811;
      v17 = 1LL << ((v16 >> 6) + 2);
LABEL_11:
      if ( (unsigned int)v17 > v14 )
        return (unsigned int)-1073741811;
      v4 += (unsigned int)v17;
      if ( v8 )
      {
        if ( v16 != 4 )
          return (unsigned int)-1073741811;
        v18 = *(unsigned __int16 *)(v13 + 1);
        v19 = *(unsigned __int16 *)(v8 + 1);
        if ( (unsigned __int16)v18 < (unsigned __int16)v19 )
          return (unsigned int)-1073741811;
        v20 = *v8;
        if ( *v8 == 3 )
          goto LABEL_20;
        if ( v20 == 67 )
        {
          v19 = *(unsigned __int16 *)(v8 + 5);
          v21 = 1;
        }
        else
        {
          if ( v20 != 71 )
          {
            v5 = -1073741811;
LABEL_22:
            v8 = 0LL;
            goto LABEL_48;
          }
LABEL_20:
          v21 = v18 - v19 + 1;
        }
        RtlSetBits((PRTL_BITMAP)(v12 + 184), v19, v21);
        v12 = a1;
        goto LABEL_22;
      }
      v22 = v9;
      v9 = 0;
      if ( v16 > 0x40u )
      {
        switch ( v16 )
        {
          case 0x42u:
            v28 = *(unsigned __int16 *)(v13 + 5);
            goto LABEL_47;
          case 0x43u:
            goto LABEL_45;
          case 0x46u:
            goto LABEL_44;
          case 0x47u:
LABEL_45:
            v8 = v13;
            goto LABEL_48;
          case 0xF0u:
            if ( v6[20] == 2 )
            {
              v23 = *(unsigned __int16 *)(v6 + 1);
              RtlSetBits((PRTL_BITMAP)(v12 + 184), v23, 1u);
              v5 = sub_1403CE24C(v24, 0x20u, &v33);
              if ( v5 < 0 )
                return (unsigned int)v5;
              v26 = (_QWORD *)v33;
              *(_DWORD *)(v33 + 24) = v23;
              v6 = v30;
              v5 = sub_1403CE24C(v25, (unsigned int)(unsigned __int8)v30[21] + 1, v26 + 2);
              if ( v5 < 0 )
                return (unsigned int)v5;
              memmove((void *)v26[2], v30 + 22, (unsigned __int8)v30[21]);
              v12 = a1;
              v27 = *(_QWORD **)(a1 + 232);
              if ( *v27 != a1 + 224 )
                __fastfail(3u);
              *v26 = a1 + 224;
              v26[1] = v27;
              *v27 = v26;
              *(_QWORD *)(a1 + 232) = v26;
              v10 = a3;
            }
            else
            {
              *v10 = 1;
            }
            goto LABEL_48;
        }
      }
      else
      {
        switch ( v16 )
        {
          case 0x40u:
          case 0u:
          case 1u:
            goto LABEL_48;
          case 2u:
LABEL_44:
            v28 = *(unsigned __int16 *)(v13 + 1);
LABEL_47:
            RtlSetBits((PRTL_BITMAP)(v12 + 184), v28, 1u);
            v12 = a1;
            goto LABEL_48;
          case 3u:
            goto LABEL_45;
          case 4u:
            if ( !v22 )
              return (unsigned int)-1073741811;
            goto LABEL_48;
        }
      }
      v9 = 1;
LABEL_48:
      if ( (unsigned __int64)v4 >= v7 )
      {
        if ( !v8 )
          return (unsigned int)v5;
        return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)v5;
}
