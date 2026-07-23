/*
 * XREFs of sub_1405ED45C @ 0x1405ED45C
 * Callers:
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     sub_1405ED1A0 @ 0x1405ED1A0 (sub_1405ED1A0.c)
 *     sub_1409BCDDC @ 0x1409BCDDC (sub_1409BCDDC.c)
 *     sub_1409BD018 @ 0x1409BD018 (sub_1409BD018.c)
 */

unsigned __int64 __fastcall sub_1405ED45C(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  unsigned __int16 *v4; // rdi
  char v5; // r15
  unsigned int v6; // eax
  __int64 v7; // rsi
  unsigned int v8; // r14d
  int v9; // r14d
  char v10; // al
  unsigned __int16 *v11; // rdx
  _WORD *v12; // r8
  __int64 v13; // rax
  char v14; // [rsp+50h] [rbp+30h] BYREF
  char v15; // [rsp+58h] [rbp+38h] BYREF
  unsigned __int16 *v16; // [rsp+60h] [rbp+40h] BYREF

  v1 = *(_BYTE *)(a1 + 93) == 64;
  v2 = a1;
  result = *(_QWORD *)(a1 + 80);
  v16 = (unsigned __int16 *)result;
  if ( v1 )
  {
    v4 = *(unsigned __int16 **)(a1 + 40);
    v5 = 0;
    if ( (unsigned __int16 *)result != v4 )
    {
      while ( 1 )
      {
        v14 = 0;
        v15 = 0;
        v6 = sub_1405ED1A0(a1, &v16);
        v7 = *(_QWORD *)(v2 + 112);
        v8 = v6;
        result = sub_1409BD018(v7, v6, &v14, &v15);
        if ( v14 == v5 )
          goto LABEL_16;
        if ( v15 != -64 )
          break;
        result = sub_1409BCDDC(v7, *(unsigned int *)(v2 + 88), v8);
        v9 = result;
        if ( !(_DWORD)result )
          break;
        sub_1409BD018(v7, (unsigned int)result, &v14, &v15);
        v10 = v14;
        v11 = v16;
        *(_WORD *)(*(_QWORD *)(v2 + 80) - 2LL) = v9;
        v12 = v11;
        *(_QWORD *)(v2 + 40) -= 2LL;
        v4 = *(unsigned __int16 **)(v2 + 40);
        *(_BYTE *)(v2 + 92) = v10;
        *(_BYTE *)(v2 + 93) = v15;
        result = *(_QWORD *)(v2 + 64);
        *(_DWORD *)(v2 + 88) = v9;
        if ( (unsigned __int16 *)result == v4 )
        {
          if ( (unsigned __int64)v11 >= result )
          {
            v13 = *(_QWORD *)(v2 + 24);
            *(_DWORD *)(v2 + 56) = 0;
            result = v13 - 2;
            *(_WORD *)(v2 + 72) = 0;
          }
          else
          {
            result -= 2LL;
          }
          *(_QWORD *)(v2 + 64) = result;
        }
        if ( v11 != v4 )
        {
          do
          {
            a1 = (__int64)(v12 + 1);
            result = (unsigned __int16)v12[1];
            *v12 = result;
            v12 = (_WORD *)a1;
            v4 = *(unsigned __int16 **)(v2 + 40);
          }
          while ( (unsigned __int16 *)a1 != v4 );
        }
        if ( *(_BYTE *)(v2 + 93) != 64 )
          return result;
LABEL_17:
        if ( v11 == v4 )
          return result;
      }
      v5 = v14;
LABEL_16:
      v11 = ++v16;
      goto LABEL_17;
    }
  }
  return result;
}
