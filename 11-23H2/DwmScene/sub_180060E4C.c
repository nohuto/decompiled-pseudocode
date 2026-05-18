/*
 * XREFs of sub_180060E4C @ 0x180060E4C
 * Callers:
 *     sub_18004EF88 @ 0x18004EF88 (sub_18004EF88.c)
 * Callees:
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 */

__int64 __fastcall sub_180060E4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v4; // rbx
  const char *v9; // rdx
  size_t v10; // r8

  v4 = (void **)(a1 + 72);
  *(_DWORD *)(a1 + 104) = 40960;
  sub_180011BA0((void **)(a1 + 72), "<unknown>", 9uLL);
  if ( *(int *)(a1 + 104) >= 40960 )
  {
    v9 = "ShaderModel40_Level93";
    v10 = (*(_DWORD *)(a2 + 560) & 4) != 0 ? 21LL : 13LL;
    if ( (*(_DWORD *)(a2 + 560) & 4) == 0 )
      v9 = "ShaderModel40";
    goto LABEL_10;
  }
  if ( *(int *)(a1 + 104) >= 37632 )
  {
    v9 = "ShaderModel40_Level93";
LABEL_9:
    v10 = 21LL;
LABEL_10:
    sub_180011BA0(v4, v9, v10);
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
  }
  if ( *(int *)(a1 + 104) >= 37120 )
  {
    v9 = "ShaderModel40_Level91";
    goto LABEL_9;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
}
