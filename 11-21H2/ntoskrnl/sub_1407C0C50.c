/*
 * XREFs of sub_1407C0C50 @ 0x1407C0C50
 * Callers:
 *     sub_140657990 @ 0x140657990 (sub_140657990.c)
 *     sub_14071EE7C @ 0x14071EE7C (sub_14071EE7C.c)
 *     sub_1407C09E0 @ 0x1407C09E0 (sub_1407C09E0.c)
 *     sub_1407C3070 @ 0x1407C3070 (sub_1407C3070.c)
 *     sub_140916E20 @ 0x140916E20 (sub_140916E20.c)
 *     sub_140920E78 @ 0x140920E78 (sub_140920E78.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406CE3EC @ 0x1406CE3EC (sub_1406CE3EC.c)
 */

_QWORD *__fastcall sub_1407C0C50(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  signed __int64 v2; // r8
  __int64 v4; // r11
  unsigned __int64 v5; // r9
  _QWORD *v6; // r10
  bool v7; // dl
  _QWORD *result; // rax
  _QWORD *v9; // rdx

  v2 = *(_QWORD *)BugCheckParameter2;
  v4 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( *(_QWORD *)BugCheckParameter2 <= 1uLL )
  {
LABEL_9:
    result = (_QWORD *)(BugCheckParameter2 + 224);
    if ( (_QWORD *)*result != result )
      KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 1uLL, 0LL);
    v9 = *(_QWORD **)(a2 + 8);
    if ( *v9 != a2 )
      __fastfail(3u);
    *result = a2;
    *(_QWORD *)(BugCheckParameter2 + 232) = v9;
    *v9 = result;
    *(_QWORD *)(a2 + 8) = result;
    *(_BYTE *)(BugCheckParameter2 + 64) |= 1u;
  }
  else
  {
    while ( 1 )
    {
      v5 = v2 - 1;
      v6 = (_QWORD *)v2;
      v7 = v2 == 3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v4 + 2944) == 1;
      result = (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v2);
      v2 = (signed __int64)result;
      if ( result == v6 )
        break;
      if ( (unsigned __int64)result <= 1 )
        goto LABEL_9;
    }
    if ( (unsigned __int64)result < v5 )
      KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
    if ( v7 )
      return (_QWORD *)sub_1406CE3EC(v4);
  }
  return result;
}
