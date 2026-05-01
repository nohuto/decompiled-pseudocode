/*
 * XREFs of ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18012E8DC
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18008CC00 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 */

__int64 __fastcall ARI::ProcessToken::SysAppId::GetAppUserModelId(
        ARI::ProcessToken::SysAppId *this,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned __int16 *v4; // rsi
  unsigned int v7; // edi
  __int64 v9; // rax
  int v10; // ebp
  wchar_t *v11; // rax
  _BYTE *v12; // r12
  __int64 v13; // rax
  int v14; // esi
  size_t v15; // rbx
  unsigned int v16; // ebp
  __int64 v17; // rax
  int v18; // eax
  _WORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 result; // rax
  _WORD *v24; // rbx
  unsigned int v25; // [rsp+20h] [rbp-38h]
  int v26; // [rsp+60h] [rbp+8h]

  v4 = (unsigned __int16 *)*((_QWORD *)this + 4);
  v7 = (unsigned int)a2;
  v9 = v4[8] >> 1;
  v10 = v9 + 1;
  if ( (_DWORD)v9 != -1 )
  {
    v26 = *v4 >> 1;
    v11 = wcschr(*((const wchar_t **)v4 + 1), 0x5Fu);
    v12 = (_BYTE *)*((_QWORD *)v4 + 1);
    v13 = ((char *)(v11 + 1) - v12) >> 1;
    v14 = v13 + 14;
    v25 = v13 + 13;
    if ( v7 < (int)v13 + 14 )
    {
      v16 = v14 + v10;
    }
    else
    {
      v15 = 2LL * (unsigned int)v13;
      memcpy_0(a4, v12, v15);
      v16 = v14 + v10;
      v17 = (unsigned int)(v26 - 13);
      *(_OWORD *)((char *)a4 + v15) = *(_OWORD *)&v12[2 * v17];
      *(_QWORD *)((char *)a4 + v15 + 16) = *(_QWORD *)&v12[2 * v17 + 16];
      *(_WORD *)((char *)a4 + v15 + 24) = *(_WORD *)&v12[2 * v17 + 24];
      *((_WORD *)a4 + v25) = 0;
      if ( v7 >= v16 )
      {
        v18 = v14 - 1;
        v19 = (_WORD *)a4 + v25;
        *v19 = 33;
        v20 = *((_QWORD *)this + 4);
        v21 = *(unsigned __int16 *)(v20 + 16) >> 1;
        if ( v7 - v18 - 1 >= (int)v21 + 1 )
        {
          v22 = v21;
          memcpy_0(v19 + 1, *(const void **)(v20 + 24), 2 * v21);
          v19[v22 + 1] = 0;
        }
        result = 0LL;
        goto LABEL_7;
      }
    }
    result = 122LL;
LABEL_7:
    *a3 = v16;
    return result;
  }
  v24 = (_WORD *)(2 * v9);
  memcpy_0(0LL, *((const void **)v4 + 3), 2 * v9);
  result = 0LL;
  *v24 = 0;
  return result;
}
