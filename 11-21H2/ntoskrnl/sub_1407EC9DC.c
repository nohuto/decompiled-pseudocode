/*
 * XREFs of sub_1407EC9DC @ 0x1407EC9DC
 * Callers:
 *     sub_1407EC7CC @ 0x1407EC7CC (sub_1407EC7CC.c)
 *     sub_1407EC8C4 @ 0x1407EC8C4 (sub_1407EC8C4.c)
 *     sub_14085E788 @ 0x14085E788 (sub_14085E788.c)
 *     KseQueryDeviceDataList @ 0x140963440 (KseQueryDeviceDataList.c)
 *     sub_140964B50 @ 0x140964B50 (sub_140964B50.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

_QWORD *__fastcall sub_1407EC9DC(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  _QWORD **v5; // rdx
  _QWORD *v6; // rsi
  _QWORD *result; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx

  v4 = sub_14042A5E0(a2, a2);
  v5 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12)));
  v6 = *v5;
  if ( *v5 == v5 )
  {
LABEL_2:
    ++*(_DWORD *)(a1 + 52);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v8 = v6 - 1;
      if ( v4 == *((_DWORD *)v6 - 2) )
      {
        if ( (unsigned int)sub_14042A5E0(a2, v6 - 1) )
          break;
      }
      v6 = (_QWORD *)*v6;
      if ( v6 == (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12))) )
        goto LABEL_2;
    }
    v9 = v8 + 3;
    v10 = v8[3];
    if ( *(_QWORD **)(v10 + 8) != v8 + 3
      || (v11 = (_QWORD *)v8[4], (_QWORD *)*v11 != v9)
      || (*v11 = v10, *(_QWORD *)(v10 + 8) = v11, v12 = *(_QWORD **)(a1 + 40), *v12 != a1 + 32) )
    {
      __fastfail(3u);
    }
    *v9 = a1 + 32;
    v8[4] = v12;
    *v12 = v9;
    *(_QWORD *)(a1 + 40) = v9;
    result = v6 - 1;
    ++*(_DWORD *)(a1 + 48);
  }
  return result;
}
