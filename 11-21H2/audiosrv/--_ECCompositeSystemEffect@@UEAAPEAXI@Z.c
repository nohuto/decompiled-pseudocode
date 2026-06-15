/*
 * XREFs of ??_ECCompositeSystemEffect@@UEAAPEAXI@Z @ 0x180008960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CCompositeSystemEffect *__fastcall CCompositeSystemEffect::`vector deleting destructor'(
        CCompositeSystemEffect *this,
        char a2)
{
  char *v4; // rcx
  int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rdx
  char *v8; // rcx
  int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rdx
  void *v12; // rcx

  v4 = (char *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    v5 = 0;
    if ( *((int *)this + 26) > 0 )
    {
      v6 = 0LL;
      do
      {
        v4 = (char *)*((_QWORD *)this + 12);
        v7 = *(_QWORD *)&v4[v6];
        if ( v7 )
        {
          *(_QWORD *)&v4[v6] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          v4 = (char *)*((_QWORD *)this + 12);
        }
        ++v5;
        v6 += 8LL;
      }
      while ( v5 < *((_DWORD *)this + 26) );
    }
    free(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_QWORD *)this + 13) = 0LL;
  v8 = (char *)*((_QWORD *)this + 10);
  if ( v8 )
  {
    v9 = 0;
    if ( *((int *)this + 22) > 0 )
    {
      v10 = 0LL;
      do
      {
        v8 = (char *)*((_QWORD *)this + 10);
        v11 = *(_QWORD *)&v8[v10];
        if ( v11 )
        {
          *(_QWORD *)&v8[v10] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          v8 = (char *)*((_QWORD *)this + 10);
        }
        ++v9;
        v10 += 8LL;
      }
      while ( v9 < *((_DWORD *)this + 22) );
    }
    free(v8);
    *((_QWORD *)this + 10) = 0LL;
  }
  *((_QWORD *)this + 11) = 0LL;
  v12 = (void *)*((_QWORD *)this + 8);
  if ( v12 )
  {
    free(v12);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 11) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
