/*
 * XREFs of ?IsDesktopObscuredInternal@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z @ 0x1802EF530
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

__int64 __fastcall CImmersiveMode::IsDesktopObscuredInternal(CImmersiveMode *this, struct IUnknown *a2, int *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // ebp
  int v8; // edi
  __int64 v9; // rcx

  *a3 = 0;
  v3 = 0LL;
  v7 = -2147319765;
  if ( *((_QWORD *)this + 44) )
  {
    v8 = 1;
    while ( !(unsigned int)SHIsSameObject(**(struct IUnknown ***)(*((_QWORD *)this + 43) + 8 * v3), a2) )
    {
      if ( (unsigned __int64)++v3 >= *((_QWORD *)this + 44) )
        return v7;
    }
    v9 = *(_QWORD *)(*((_QWORD *)this + 43) + 8 * v3);
    if ( *(_BYTE *)(v9 + 12) && !*(_BYTE *)(v9 + 13) )
      v8 = 0;
    *a3 = v8;
    return 0;
  }
  return v7;
}
