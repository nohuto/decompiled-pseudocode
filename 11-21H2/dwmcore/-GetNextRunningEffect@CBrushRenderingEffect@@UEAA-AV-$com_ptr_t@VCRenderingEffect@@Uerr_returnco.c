/*
 * XREFs of ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800C6160
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1800C662C (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CBrushRenderingEffect::GetNextRunningEffect(__int64 a1, _QWORD *a2, _QWORD *a3, _BYTE *a4)
{
  _BYTE *v8; // r8
  __int64 v9; // rax
  unsigned int v11; // r11d
  unsigned int v12; // ebp
  _BYTE *v13; // r14
  char *v14; // r9
  _BYTE *v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rax
  bool v18; // zf
  _QWORD *v19; // rdx

  *a4 = 0;
  if ( (*(unsigned __int16 (__fastcall **)(_QWORD *))(*a3 + 72LL))(a3) != 2 )
    goto LABEL_4;
  if ( a3 == (_QWORD *)a1 )
    goto LABEL_17;
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 == a3[2] )
  {
    v11 = *(_DWORD *)(v9 + 60);
    v12 = 0;
    if ( v11 )
    {
      v13 = (_BYTE *)(a1 + 260);
      v14 = (char *)a3 - a1;
      v8 = (char *)a3 + 121;
      v15 = (_BYTE *)(a1 + 40);
      v16 = a1 - (_QWORD)a3;
      while ( 1 )
      {
        v17 = *((_QWORD *)v15 - 2);
        v18 = v17
            ? v17 == *(_QWORD *)&v15[(_QWORD)v14 - 16]
            : *(_QWORD *)&v15[(_QWORD)v14 - 8 + v16] == *(_QWORD *)&v15[(_QWORD)v14 - 8];
        if ( !v18
          || *v15 != v15[(_QWORD)v14]
          || v8[v16 - 1] != *(v8 - 1)
          || v8[v16] != *v8
          || v8[v16 + 1] != v8[1]
          || *v13 != v13[(_QWORD)v14] )
        {
          break;
        }
        ++v12;
        v8 += 3;
        v15 += 24;
        ++v13;
        if ( v12 >= v11 )
          goto LABEL_17;
      }
      v19 = a3;
      goto LABEL_18;
    }
LABEL_17:
    *a4 = 1;
    v19 = (_QWORD *)a1;
LABEL_18:
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
      a2,
      v19,
      v8);
    return a2;
  }
LABEL_4:
  *a2 = a3;
  (*(void (__fastcall **)(_QWORD *))*a3)(a3);
  return a2;
}
