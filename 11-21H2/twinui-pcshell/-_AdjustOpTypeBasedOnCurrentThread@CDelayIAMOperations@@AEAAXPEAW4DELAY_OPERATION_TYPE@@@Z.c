/*
 * XREFs of ?_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z @ 0x1800EA148
 * Callers:
 *     CDelayIAMOperations::AddOperation__lambda_408d293201316df79a8620e012e4c791___ @ 0x180057C18 (CDelayIAMOperations--AddOperation__lambda_408d293201316df79a8620e012e4c791___.c)
 *     CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___ @ 0x180058134 (CDelayIAMOperations--AddOperation__lambda_d2a883147a4aaef7223296bf15465975___.c)
 *     CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___ @ 0x1800E9F90 (CDelayIAMOperations--AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x180106998 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     CDelayIAMOperations::AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___ @ 0x1802DBF80 (CDelayIAMOperations--AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___.c)
 *     CDelayIAMOperations::AddOperation__lambda_30895542713010bf0b1f8061f525305d___ @ 0x1802DC10C (CDelayIAMOperations--AddOperation__lambda_30895542713010bf0b1f8061f525305d___.c)
 *     CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___ @ 0x1802DC2AC (CDelayIAMOperations--AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___.c)
 *     CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___ @ 0x1802DC438 (CDelayIAMOperations--AddOperation__lambda_bb299bb733d931796faa9380238be063___.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDelayIAMOperations::_AdjustOpTypeBasedOnCurrentThread(
        CDelayIAMOperations *this,
        enum DELAY_OPERATION_TYPE *a2)
{
  if ( *(_DWORD *)a2 == 4 )
    *(_DWORD *)a2 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 80LL))(*((_QWORD *)this + 1)) != 0
                  ? 1
                  : 3;
}
