/*
 * XREFs of IoGetDriverDirectory @ 0x140943930
 * Callers:
 *     sub_14060F590 @ 0x14060F590 (sub_14060F590.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1409440D0 @ 0x1409440D0 (sub_1409440D0.c)
 *     sub_140944218 @ 0x140944218 (sub_140944218.c)
 */

__int64 __fastcall IoGetDriverDirectory(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  void *v5; // rcx
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // ebx
  const wchar_t *v10; // rdx
  int v11; // eax
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v13 = 0LL;
  if ( a1 && (v7 = *(_QWORD *)(a1 + 48)) != 0 && *(_QWORD *)(v7 + 32) && *(_WORD *)(v7 + 24) && !(_DWORD)a3 && a4 )
  {
    if ( a2 )
    {
      v8 = a2 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
          return (unsigned int)-1073741811;
        LOBYTE(a3) = 1;
        v10 = L"SharedData";
      }
      else
      {
        a3 = 0LL;
        v10 = L"Data";
      }
      v11 = sub_140944218(a1, v10, a3, &v13);
    }
    else
    {
      v11 = sub_1409440D0(a1, &v13);
    }
    v9 = v11;
    if ( v11 >= 0 )
    {
      *a4 = v13;
      return v9;
    }
    v5 = v13;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v5 )
    ZwClose(v5);
  return v9;
}
