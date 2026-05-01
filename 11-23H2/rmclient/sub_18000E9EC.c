/*
 * XREFs of sub_18000E9EC @ 0x18000E9EC
 * Callers:
 *     sub_1800112B0 @ 0x1800112B0 (sub_1800112B0.c)
 * Callees:
 *     sub_18000DA14 @ 0x18000DA14 (sub_18000DA14.c)
 *     sub_180010B38 @ 0x180010B38 (sub_180010B38.c)
 *     sub_180011DFC @ 0x180011DFC (sub_180011DFC.c)
 */

bool __fastcall sub_18000E9EC(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  volatile __int32 *v7; // rbx
  unsigned int v10; // eax
  unsigned int v11; // r14d
  bool v12; // di
  char v13; // dl
  int v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a2;
  v7 = (volatile __int32 *)&unk_180032BD0;
  if ( a4 )
    v7 = (volatile __int32 *)&unk_180032C30;
  if ( (*v7 & 2) != 0 )
  {
    if ( (*v7 & 1) != 0 )
    {
      *a5 = 1;
      return (unsigned int)sub_180011DFC(a1, a2, a3, 0LL) != 0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v10 = sub_18000DA14();
    v14 = 0;
    v11 = v10;
    *a5 = 1;
    v12 = (unsigned int)sub_180011DFC(a1, v6, v5, &v14) != 0;
    v13 = _InterlockedExchange(v7, (v14 != 0) + 6);
    if ( !v14 && (v13 & 4) == 0 )
      sub_180010B38(v7, 0LL, v11);
    return v12;
  }
}
