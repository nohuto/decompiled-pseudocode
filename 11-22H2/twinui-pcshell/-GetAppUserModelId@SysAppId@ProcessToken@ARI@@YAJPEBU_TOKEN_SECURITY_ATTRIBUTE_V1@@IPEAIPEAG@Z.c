/*
 * XREFs of ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18016B254
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C5230 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18016B30C (-GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@.c)
 *     ?GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18016B3E0 (-GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 */

int __fastcall ARI::ProcessToken::SysAppId::GetAppUserModelId(
        ARI::ProcessToken::SysAppId *this,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *a2,
        _DWORD *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v9; // r10
  int v10; // esi
  int result; // eax
  unsigned int v12; // ecx
  __int64 v13; // rbx
  _WORD *v14; // rbx
  unsigned __int16 *v15; // [rsp+20h] [rbp-28h]
  unsigned __int16 *v16; // [rsp+20h] [rbp-28h]
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v5 = *((_QWORD *)this + 4);
  v9 = *(unsigned __int16 *)(v5 + 16) >> 1;
  v10 = v9 + 1;
  if ( (_DWORD)v9 == -1 )
  {
    v14 = (_WORD *)(2 * v9);
    memcpy_0(0LL, *(const void **)(v5 + 24), 2 * v9);
    result = 0;
    *v14 = 0;
    return result;
  }
  result = ARI::ProcessToken::SysAppId::GetPackageFamilyName(
             this,
             (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)v4,
             (unsigned int)&v17,
             a4,
             v15);
  v12 = v17;
  if ( result == 122 )
    goto LABEL_7;
  if ( result )
    return result;
  if ( v4 < v10 + v17 )
  {
LABEL_7:
    result = 122;
    *a3 = v10 + v17;
    return result;
  }
  v13 = v17 - 1;
  *((_WORD *)a4 + v13) = 33;
  ARI::ProcessToken::SysAppId::GetPackageRelativeApplicationId(
    this,
    (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(v4 - v12),
    (unsigned int)&v17,
    (unsigned int *)((char *)a4 + 2 * v12),
    v16);
  *a3 = v10 + v13 + 1;
  return 0;
}
