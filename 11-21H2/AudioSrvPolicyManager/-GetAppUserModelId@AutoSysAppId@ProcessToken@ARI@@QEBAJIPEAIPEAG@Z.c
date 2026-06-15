/*
 * XREFs of ?GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z @ 0x180041638
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800417A4 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180044443 (memcpy_0.c)
 */

__int64 __fastcall ARI::ProcessToken::AutoSysAppId::GetAppUserModelId(
        ARI::ProcessToken::AutoSysAppId *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4)
{
  unsigned int v4; // edi
  unsigned __int16 *v8; // rbp
  __int64 v9; // rax
  int v10; // r12d
  _WORD *v11; // rbx
  wchar_t *v12; // rax
  _BYTE *v13; // rbp
  __int64 v14; // rax
  int v15; // r14d
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // ebp
  int v19; // eax
  unsigned __int16 *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v25; // [rsp+20h] [rbp-38h]
  __int64 v26; // [rsp+28h] [rbp-30h]
  int v27; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v26 = *((_QWORD *)this + 1);
  v8 = *(unsigned __int16 **)(v26 + 32);
  v9 = v8[8] >> 1;
  v10 = v9 + 1;
  if ( (_DWORD)v9 != -1 )
  {
    v27 = *v8 >> 1;
    v12 = wcschr(*((const wchar_t **)v8 + 1), 0x5Fu);
    v13 = (_BYTE *)*((_QWORD *)v8 + 1);
    v14 = ((char *)(v12 + 1) - v13) >> 1;
    v15 = v14 + 14;
    v25 = v14 + 13;
    if ( a2 < (int)v14 + 14 )
    {
      v18 = v15 + v10;
    }
    else
    {
      v16 = (unsigned int)v14;
      memcpy_0(a4, v13, v16 * 2);
      v17 = (unsigned int)(v27 - 13);
      *(_OWORD *)&a4[v16] = *(_OWORD *)&v13[2 * v17];
      *(_QWORD *)&a4[v16 + 8] = *(_QWORD *)&v13[2 * v17 + 16];
      LOWORD(v17) = *(_WORD *)&v13[2 * v17 + 24];
      v18 = v15 + v10;
      a4[v16 + 12] = v17;
      a4[v25] = 0;
      if ( a2 >= v15 + v10 )
      {
        v19 = v15 - 1;
        v20 = &a4[v25];
        *v20 = 33;
        v21 = *(_QWORD *)(v26 + 32);
        v22 = *(unsigned __int16 *)(v21 + 16) >> 1;
        if ( a2 - v19 - 1 >= (int)v22 + 1 )
        {
          v23 = v22;
          memcpy_0(v20 + 1, *(const void **)(v21 + 24), 2 * v22);
          v20[v23 + 1] = 0;
        }
        goto LABEL_9;
      }
    }
    v4 = 122;
LABEL_9:
    *a3 = v18;
    return v4;
  }
  v11 = (_WORD *)(2 * v9);
  memcpy_0(0LL, *((const void **)v8 + 3), 2 * v9);
  *v11 = 0;
  return v4;
}
