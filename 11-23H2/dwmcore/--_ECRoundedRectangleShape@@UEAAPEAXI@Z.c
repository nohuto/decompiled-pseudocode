/*
 * XREFs of ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x180038E10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800F62C8 (--0CThreadContext@@AEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

CRoundedRectangleShape *__fastcall CRoundedRectangleShape::`vector deleting destructor'(
        CRoundedRectangleShape *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *Value; // rdi
  CThreadContext *v8; // rax
  unsigned int v9; // ecx
  CThreadContext *v10; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CRoundedRectangleShape::`vftable';
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x18uLL);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v8 = (CThreadContext *)operator new(0x190uLL);
        if ( !v8 || (v10 = CThreadContext::CThreadContext(v8), (Value = v10) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v10);
      }
      if ( *((_DWORD *)Value + 13) >= *((_DWORD *)Value + 12) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = Value[7];
        ++*((_DWORD *)Value + 13);
        Value[7] = this;
      }
    }
  }
  return this;
}
