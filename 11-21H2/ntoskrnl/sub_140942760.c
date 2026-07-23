/*
 * XREFs of sub_140942760 @ 0x140942760
 * Callers:
 *     sub_14055F864 @ 0x14055F864 (sub_14055F864.c)
 *     sub_14055F904 @ 0x14055F904 (sub_14055F904.c)
 *     sub_140942B68 @ 0x140942B68 (sub_140942B68.c)
 * Callees:
 *     sub_14055FD38 @ 0x14055FD38 (sub_14055FD38.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140942AC4 @ 0x140942AC4 (sub_140942AC4.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall sub_140942760(__int64 a1, PCUNICODE_STRING *a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rdi
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  _QWORD *v8; // rbp
  int v9; // ecx
  __int64 Pool2; // rax
  int v11; // eax
  UNICODE_STRING *v12; // rax
  _QWORD *v13; // rax

  v2 = (_QWORD *)(a1 + 56);
  v3 = 0LL;
  v4 = *(_QWORD **)(a1 + 56);
  v5 = 0LL;
  if ( v4 == (_QWORD *)(a1 + 56) )
  {
LABEL_13:
    Pool2 = ExAllocatePool2(256LL, 40LL, 1399877200LL);
    v3 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 32) = *((_DWORD *)a2 + 4);
      v11 = *(_DWORD *)a2;
      *((_DWORD *)v3 + 4) = *(_DWORD *)a2;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          v12 = (UNICODE_STRING *)ExAllocatePool2(256LL, 16LL, 1399877200LL);
          v3[3] = v12;
          if ( RtlDuplicateUnicodeString(0, a2[1], v12) < 0 )
          {
            sub_140942AC4(v3);
            return 0LL;
          }
        }
      }
      else
      {
        v3[3] = a2[1];
      }
      v13 = (_QWORD *)v2[1];
      if ( (_QWORD *)*v13 != v2 )
        __fastfail(3u);
      *v3 = v2;
      v3[1] = v13;
      *v13 = v3;
      v2[1] = v3;
    }
  }
  else
  {
    while ( !v5 )
    {
      v8 = v4;
      v4 = (_QWORD *)*v4;
      v9 = *((_DWORD *)v8 + 4);
      if ( v9 == *(_DWORD *)a2 )
      {
        if ( v9 )
        {
          if ( v9 == 1 && RtlEqualUnicodeString((PCUNICODE_STRING)v8[3], a2[1], 0) )
            v5 = v8;
        }
        else if ( (PCUNICODE_STRING)v8[3] == a2[1] )
        {
          v5 = v8;
        }
      }
      if ( v4 == v2 )
      {
        if ( !v5 )
          goto LABEL_13;
        break;
      }
    }
    *((_DWORD *)v5 + 8) |= *((_DWORD *)a2 + 4);
  }
  if ( !v5 )
    v5 = v3;
  if ( v5 )
    sub_14055FD38(a1, *((_DWORD *)a2 + 4));
  return v5;
}
