/*
 * XREFs of sub_1405F9B18 @ 0x1405F9B18
 * Callers:
 *     sub_140392180 @ 0x140392180 (sub_140392180.c)
 * Callees:
 *     sub_140261818 @ 0x140261818 (sub_140261818.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405F94CC @ 0x1405F94CC (sub_1405F94CC.c)
 *     sub_1405FB3BC @ 0x1405FB3BC (sub_1405FB3BC.c)
 */

__int64 __fastcall sub_1405F9B18(__int64 a1, char *a2, UCHAR *a3, ULONG_PTR a4, __int64 a5, int a6)
{
  __int64 v10; // rdx
  ULONGLONG *v11; // rcx
  __int64 v12; // r9
  char v13; // al
  unsigned int v14; // ebx
  __int64 result; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v11 = sub_140261818((unsigned __int8)*(_DWORD *)(a1 + 776) == 0 ? 2 : 0);
  if ( v11 )
  {
    v16 = 0LL;
    if ( a6 == -1073741116 )
    {
      BYTE1(v16) = 2;
    }
    else
    {
      v13 = BYTE1(v16);
      v10 = 1LL;
      if ( a6 == -1073741761 )
        v13 = 1;
      BYTE1(v16) = v13;
    }
    sub_1405FB3BC(v11, v10, a1, a2, *(_WORD *)(v12 + 4), &v16);
  }
  v14 = (*(_DWORD *)(a1 + 832) >> 5) & 3;
  if ( v14 >= 2 && (_BYTE)KdDebuggerEnabled )
    __debugbreak();
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) == 0
    || a6 != -1073741116
    || (result = sub_1405F94CC(a1, a2, a3, a4, a5), !(_DWORD)result) )
  {
    if ( v14 >= 3 )
      KeBugCheckEx(0x12Bu, a6, *(unsigned __int16 *)(a4 + 4), (ULONG_PTR)a2, (ULONG_PTR)a3);
    return 0LL;
  }
  return result;
}
