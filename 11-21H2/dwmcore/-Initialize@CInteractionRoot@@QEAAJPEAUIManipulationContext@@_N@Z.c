/*
 * XREFs of ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801F23C4
 * Callers:
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x180182CE0 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 * Callees:
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x18002BF74 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x18002C250 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x18002C2FC (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800CADE4 (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z @ 0x1801F17FC (--$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z.c)
 */

__int64 __fastcall CInteractionRoot::Initialize(CInteractionRoot *this, struct IManipulationContext *a2, char a3)
{
  CInteractionContextWrapper *v5; // rax
  CInteractionContextWrapper *v6; // rax
  CInteractionContextWrapper *v7; // rbx
  CInteractionContextWrapper *v8; // rax
  CInteractionContextWrapper *v9; // rax
  CInteractionContextWrapper *v10; // rax
  int v11; // ebx
  __int64 v12; // r8
  struct IInteractionContextWrapper *v14; // [rsp+30h] [rbp-30h] BYREF
  CInteractionContextWrapper *v15; // [rsp+38h] [rbp-28h] BYREF
  struct IInteractionContextWrapper *v16; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  int v18; // [rsp+50h] [rbp-10h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  *((_QWORD *)this + 172) = a2;
  v5 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( !v5 )
  {
    v14 = 0LL;
LABEL_19:
    SAFE_DELETE<IInteractionContextWrapper>((void **)&v14);
    SAFE_DELETE<IInteractionContextWrapper>((void **)&v15);
    SAFE_DELETE<IInteractionContextWrapper>((void **)&v16);
    SAFE_DELETE<IInteractionContextWrapper>((void **)&v17);
    return (unsigned int)-2147024882;
  }
  v14 = CInteractionContextWrapper::CInteractionContextWrapper(v5);
  if ( !v14 )
    goto LABEL_19;
  v6 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  v7 = v6 ? CInteractionContextWrapper::CInteractionContextWrapper(v6) : 0LL;
  v15 = v7;
  v8 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( !v8 )
    goto LABEL_19;
  v16 = CInteractionContextWrapper::CInteractionContextWrapper(v8);
  if ( !v16 )
    goto LABEL_19;
  v9 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( !v9 )
    goto LABEL_19;
  v10 = CInteractionContextWrapper::CInteractionContextWrapper(v9);
  v17 = (unsigned __int64)v10;
  if ( !v10 )
    goto LABEL_19;
  v11 = CInteractionProcessor::Initialize((CInteractionRoot *)((char *)this + 24), v14, v7, v16, v10, 1);
  if ( v11 >= 0 )
  {
    v17 = 0xFFFFFFFF00000001uLL;
    v18 = -805306369;
    v11 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 24, 0, 1, &v17, 1u);
    if ( v11 >= 0 )
    {
      v17 = 0xFFFFFFFF00000001uLL;
      v18 = -805306369;
      v11 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 24, 0, 2, &v17, 1u);
      if ( v11 >= 0 )
      {
        LODWORD(v14) = -805306369;
        v11 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 24, 0, 4, &v14, 1u);
        if ( v11 >= 0 )
        {
          v17 = 0xFFFFFFFF00000001uLL;
          v18 = -805306369;
          v11 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 24, 0, 5, &v17, 1u);
          if ( v11 >= 0 )
          {
            v17 = 0xFFFFFFFF00000001uLL;
            v18 = -805306369;
            v11 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 24, 0, 3, &v17, 1u);
            if ( v11 >= 0 )
            {
              if ( a3 )
              {
                LOBYTE(v12) = a3;
                (*(void (__fastcall **)(CInteractionRoot *, _QWORD, __int64, __int64))(*(_QWORD *)this + 40LL))(
                  this,
                  0LL,
                  v12,
                  1LL);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v11;
}
