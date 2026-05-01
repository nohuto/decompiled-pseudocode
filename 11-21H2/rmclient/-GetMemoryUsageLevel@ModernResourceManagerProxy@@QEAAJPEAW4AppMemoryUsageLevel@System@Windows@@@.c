/*
 * XREFs of ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x180006D68
 * Callers:
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x180006E60 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180006390 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 */

__int64 __fastcall ModernResourceManagerProxy::GetMemoryUsageLevel(
        ModernResourceManagerProxy *this,
        enum Windows::System::AppMemoryUsageLevel *a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // eax
  int v9; // [rsp+50h] [rbp+8h] BYREF
  char v10; // [rsp+60h] [rbp+18h] BYREF
  char v11; // [rsp+68h] [rbp+20h] BYREF
  int v12; // [rsp+6Ch] [rbp+24h]

  RtlAcquireSRWLockExclusive((char *)this + 96);
  *((_DWORD *)this + 26) = GetCurrentThreadId();
  v4 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v4 >= 0 )
  {
    v9 = 8;
    v5 = NtQueryWnfStateData((char *)this + 40, 0LL, 0LL, &v10, &v11, &v9);
    if ( v5 < 0 )
    {
      v4 = v5 | 0x10000000;
      goto LABEL_8;
    }
    v6 = v12;
    if ( (unsigned int)QuirkIsEnabled(1114131LL) && v6 >= 4 )
    {
LABEL_10:
      v7 = 2;
      goto LABEL_7;
    }
    if ( v6 >= 0 )
    {
      v7 = 1;
      if ( v6 > 1 )
      {
        if ( v6 == 2 )
          goto LABEL_7;
        v7 = 3;
        if ( v6 == 3 )
          goto LABEL_10;
        if ( v6 == 4 )
          goto LABEL_7;
      }
    }
    v7 = 0;
LABEL_7:
    *(_DWORD *)a2 = v7;
    v4 = 0;
  }
LABEL_8:
  *((_DWORD *)this + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)this + 96);
  return (unsigned int)v4;
}
