/*
 * XREFs of Feature_1746721083__private_IsEnabledDeviceUsage @ 0x1C00D284C
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C005ED70 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     Feature_1746721083__private_IsEnabledFallback @ 0x1C00D2884 (Feature_1746721083__private_IsEnabledFallback.c)
 */

__int64 Feature_1746721083__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1746721083__private_featureState & 0x10) != 0 )
    return Feature_1746721083__private_featureState & 1;
  else
    return Feature_1746721083__private_IsEnabledFallback((unsigned int)Feature_1746721083__private_featureState, 3LL);
}
