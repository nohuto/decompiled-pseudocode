/*
 * XREFs of ?QueryInterface@?$CComObject@VCVADServer@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF520
 * Callers:
 *     <none>
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800181E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CVADServer>::QueryInterface(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  const struct _GUID *v8; // rcx
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rbx

  v6 = 0;
  if ( !a1 )
    return (unsigned int)-2147024809;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !*(_DWORD *)a2 && !*(_DWORD *)(a2 + 4) && *(_DWORD *)(a2 + 8) == 192 && *(_DWORD *)(a2 + 12) == 1174405120 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      *a3 = a1;
      return v6;
    }
    v7 = &unk_1801787A0;
    while ( 1 )
    {
      v8 = (const struct _GUID *)*(v7 - 2);
      if ( v8 )
      {
        v9 = 0;
        if ( !InlineIsEqualGUID(v8, (const struct _GUID *)a2) )
          goto LABEL_17;
      }
      else
      {
        v9 = 1;
      }
      if ( *v7 == 1LL )
      {
        v11 = a1 + *(v7 - 1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        *a3 = v11;
        return v6;
      }
      v10 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))*v7)(a1, a2, a3, *(v7 - 1));
      if ( !v10 || !v9 && v10 < 0 )
        return (unsigned int)v10;
LABEL_17:
      v7 += 3;
      if ( !*v7 )
        return (unsigned int)-2147467262;
    }
  }
  return (unsigned int)-2147467261;
}
