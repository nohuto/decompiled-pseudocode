/*
 * XREFs of ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0238BAC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C0238E50 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0238F50 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00821A8 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0083090 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x1C0238A00 (--$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::ChangeRole(__int64 a1, int a2, unsigned __int8 a3)
{
  int v4; // ebp
  int Window; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  CWindowProp *v9; // rdi
  int v10; // esi
  CWindowProp *v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0LL;
  v4 = a3;
  Window = 0;
  if ( CWindowProp::GetProp<CoreWindowProp>(a1, (__int64 *)&v12)
    || (Window = CWindowProp::CreateWindowProp<CoreWindowProp>((__int64 *)&v12), Window < 0) )
  {
    v9 = v12;
  }
  else
  {
    v8 = a1;
    v9 = v12;
    if ( !(unsigned int)CWindowProp::SetProp(v12, v8) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v9)(v9);
      return (unsigned int)-1073741790;
    }
  }
  if ( Window >= 0 )
  {
    v10 = a2 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        *((_DWORD *)v9 + 6) = v4;
      }
      else
      {
        UserSetLastError(87LL, v7);
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      *((_DWORD *)v9 + 7) = v4;
    }
  }
  return (unsigned int)Window;
}
