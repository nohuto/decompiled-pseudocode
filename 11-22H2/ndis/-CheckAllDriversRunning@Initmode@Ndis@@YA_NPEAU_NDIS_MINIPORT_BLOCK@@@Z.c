/*
 * XREFs of ?CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01204A0
 * Callers:
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C012040C (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Ndis::Initmode::CheckAllDriversRunning(Ndis::Initmode *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 i; // rdx
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 j; // rdx
  __int64 v7; // r10

  v2 = *((unsigned int *)this + 1257);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= v2 )
LABEL_16:
      __fastfail(5u);
    v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 629) + 8 * i) + 80LL);
    if ( (*(_DWORD *)(v4 + 40) & 0x10) == 0 && !*(_QWORD *)(v4 + 56) )
      return 0;
  }
  v5 = *((unsigned int *)this + 1253);
  for ( j = 0LL; j != v5; ++j )
  {
    if ( j >= v5 )
      goto LABEL_16;
    v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 627) + 8 * j) + 80LL);
    if ( (*(_DWORD *)(v7 + 32) & 1) != 0 && !*(_QWORD *)(v7 + 40) )
      return 0;
  }
  return 1;
}
