/*
 * XREFs of sub_1409D11F4 @ 0x1409D11F4
 * Callers:
 *     sub_1409D3874 @ 0x1409D3874 (sub_1409D3874.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     sub_1409D0420 @ 0x1409D0420 (sub_1409D0420.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409D11F4(__int64 a1, int a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // r12d
  void *v9; // r14
  size_t v10; // r13
  unsigned int v11; // eax
  __int64 v12; // r12
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned __int64 v15; // r15
  _WORD *v16; // rsi
  const wchar_t *v17; // rdx
  __int64 v18; // rax
  _DWORD *v19; // rbp
  int v20; // edi
  char *v21; // rcx
  void *Src; // [rsp+20h] [rbp-48h] BYREF

  Src = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( a1 && a4 && a2 )
  {
    *a5 = 1;
    if ( (unsigned int)(a2 - 1) < 4 )
      return 1336;
    v10 = *(unsigned int *)(a1 + 1);
    *a5 = 5;
    if ( a2 - 5 < (unsigned int)v10 )
    {
      return 1336;
    }
    else
    {
      if ( a3 != -8 )
      {
        v11 = sub_1409D0420((unsigned __int16 *)(a1 + 5), v10, (__int64 *)&Src);
        v9 = Src;
        v6 = v11;
        if ( v11 )
          goto LABEL_39;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_WORD *)Src + v12) );
        v8 = 2 * v12;
        v13 = v8 + 2;
        if ( v8 + 2 < v8 )
          goto LABEL_22;
        switch ( a3 )
        {
          case -5:
            v7 = 8;
            v14 = v8 + 18;
            break;
          case -7:
            v7 = 6;
            v14 = v8 + 14;
            break;
          case -6:
            v7 = 10;
            v14 = v8 + 22;
            break;
          case -4:
            v7 = 7;
            v14 = v8 + 16;
            break;
          default:
            goto LABEL_24;
        }
        if ( v14 < v13 )
        {
LABEL_22:
          v6 = 534;
          goto LABEL_39;
        }
        v13 = v14;
LABEL_24:
        v15 = v13;
        v16 = sub_14067757C(v13);
        *a4 = v16;
        if ( !v16 )
        {
          v6 = 8;
          goto LABEL_39;
        }
        switch ( a3 )
        {
          case -5:
            v17 = L"@DEVICE.";
            break;
          case -7:
            v17 = L"@USER.";
            break;
          case -6:
            v17 = L"@RESOURCE.";
            break;
          case -4:
            v17 = L"@TOKEN.";
            break;
          default:
            v18 = v7 * 2;
            if ( a3 == -8 )
            {
              v19 = a5;
              v21 = (char *)&v16[v7];
              v20 = *a5;
              memmove(v21, (const void *)(a1 + (unsigned int)*a5), v10);
              goto LABEL_38;
            }
LABEL_36:
            memmove((char *)v16 + v18, v9, v8);
            v19 = a5;
            v20 = *a5;
LABEL_38:
            v16[(v15 >> 1) - 1] = 0;
            *v19 = v20 + v10;
LABEL_39:
            if ( v9 )
              ExFreePoolWithTag(v9, 0);
            return v6;
        }
        memmove(v16, v17, v7 * 2);
        v18 = v7 * 2;
        goto LABEL_36;
      }
      v13 = v10 + 2;
      if ( (int)v10 + 2 >= (unsigned int)v10 )
        goto LABEL_24;
      return 534;
    }
  }
  return 87LL;
}
