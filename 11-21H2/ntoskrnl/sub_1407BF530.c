/*
 * XREFs of sub_1407BF530 @ 0x1407BF530
 * Callers:
 *     sub_1407BF2E0 @ 0x1407BF2E0 (sub_1407BF2E0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_DWORD *__fastcall sub_1407BF530(ULONG_PTR BugCheckParameter2, _DWORD *BugCheckParameter3, __int64 a3, __int64 a4)
{
  _DWORD *result; // rax
  unsigned __int16 v7; // r10
  char v8; // r11
  unsigned __int8 *BugCheckParameter4; // rbx
  int v10; // edx
  unsigned int v11; // edx
  __int16 v12; // cx

  result = BugCheckParameter3;
  v7 = 4;
  v8 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 96) + 32LL) + 64LL) & 0xF;
  BugCheckParameter4 = (unsigned __int8 *)(a3 & 0xFFFFFFFFFFFFFFFEuLL);
  while ( 1 )
  {
    v10 = *BugCheckParameter4++;
    if ( (v10 & 0xF0) == 0xF0 )
      break;
    if ( (_BYTE)v10 != 0xEF )
    {
      if ( (unsigned __int8)v10 >= 0xEBu )
      {
        v11 = 239 - v10;
        goto LABEL_7;
      }
      v7 = v10;
      goto LABEL_6;
    }
    v11 = *BugCheckParameter4;
    if ( v11 <= 4 )
      KeBugCheckEx(0x1Au, 0x31uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    ++BugCheckParameter4;
    do
    {
LABEL_7:
      result = (_DWORD *)((char *)result + v7);
      if ( result >= BugCheckParameter3 + 1024 )
        KeBugCheckEx(0x1Au, 0x31uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      if ( v8 )
      {
        if ( v8 == 3 )
        {
          if ( ((unsigned __int16)result & 0xFFFu) <= 0xFFC )
            *result += a4;
        }
        else if ( v8 == 10 && ((unsigned __int16)result & 0xFFFu) <= 0xFF8 )
        {
          *(_QWORD *)result += a4;
        }
      }
      --v11;
    }
    while ( v11 );
  }
  v12 = *BugCheckParameter4;
  if ( (_BYTE)v12 )
  {
    v7 = (16 * v12) | v10 & 0xFF0F;
    ++BugCheckParameter4;
LABEL_6:
    v11 = 1;
    goto LABEL_7;
  }
  return result;
}
