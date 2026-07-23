/*
 * XREFs of sub_140811AFC @ 0x140811AFC
 * Callers:
 *     sub_140766E4C @ 0x140766E4C (sub_140766E4C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140811AFC(__int64 a1)
{
  __int64 v1; // rax
  signed __int32 v3; // eax
  signed __int32 v4; // ett

  v1 = *(_QWORD *)(a1 + 136);
  if ( *(_QWORD *)(a1 + 48) != v1 )
  {
    if ( v1 )
    {
      _m_prefetchw((const void *)(a1 + 296));
      v3 = *(_DWORD *)(a1 + 296);
      do
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v3, v3);
      }
      while ( v4 != v3 );
      if ( (v3 & 0x2000) == 0 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 136), 0x4D584650u);
    }
  }
  *(_OWORD *)(a1 + 128) = 0LL;
}
