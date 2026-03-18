/*
 * XREFs of ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03BAD00
 * Callers:
 *     ?CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03BADC0 (-CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescri.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x1C03BA9E0 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 */

__int64 *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::CopyInstance(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 *v6; // rax
  unsigned __int8 *v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int8 *v11; // rcx
  unsigned __int8 *v13; // [rsp+30h] [rbp+8h] BYREF

  v6 = (unsigned __int8 *)operator new[](*(unsigned int *)(a1 + 8), 0x4D677844u, 256LL, a4);
  v13 = v6;
  v7 = v6;
  if ( v6 )
  {
    memmove(v6, *(const void **)(a1 + 24), *(unsigned int *)(a1 + 8));
    v9 = operator new[](0x30uLL, 0x4D677844u, 256LL, v8);
    if ( v9 )
    {
      v10 = DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(v9, &v13, *(_DWORD *)(a1 + 8));
      if ( v10 )
      {
        v11 = v13;
        *a2 = v10;
        if ( !v11 )
          return a2;
LABEL_10:
        operator delete[](v11);
        return a2;
      }
      v7 = v13;
    }
    *a2 = 0LL;
    if ( !v7 )
      return a2;
    v11 = v7;
    goto LABEL_10;
  }
  *a2 = 0LL;
  return a2;
}
