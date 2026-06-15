/*
 * XREFs of ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x140015640
 * Callers:
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400152C8 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCopyW(char *a1, __int64 a2, char *a3)
{
  signed __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // rax

  v3 = a3 - a1;
  v4 = 256LL;
  do
  {
    if ( v4 == -2147483390 )
      break;
    v5 = *(_WORD *)&a1[v3];
    if ( !v5 )
      break;
    *(_WORD *)a1 = v5;
    a1 += 2;
    --v4;
  }
  while ( v4 );
  v6 = (unsigned __int16 *)(a1 - 2);
  if ( v4 )
    v6 = (unsigned __int16 *)a1;
  *v6 = 0;
  return v4 == 0 ? 0x8007007A : 0;
}
