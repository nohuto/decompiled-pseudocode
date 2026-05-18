/*
 * XREFs of sub_18006965C @ 0x18006965C
 * Callers:
 *     sub_180055C48 @ 0x180055C48 (sub_180055C48.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

__int64 __fastcall sub_18006965C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  char *v9; // rdx
  size_t v10; // r8

  v4 = (__int64 *)(a1 + 72);
  *(_DWORD *)(a1 + 104) = 40960;
  sub_180012190((__int64 *)(a1 + 72), "<unknown>", 9uLL);
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
    sub_180012190(v4, v9, v10);
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
  }
  if ( *(int *)(a1 + 104) >= 37120 )
  {
    v9 = "ShaderModel40_Level91";
    goto LABEL_9;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
}
