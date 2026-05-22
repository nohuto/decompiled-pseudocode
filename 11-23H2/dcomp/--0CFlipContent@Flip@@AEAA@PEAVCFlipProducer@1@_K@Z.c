/*
 * XREFs of ??0CFlipContent@Flip@@AEAA@PEAVCFlipProducer@1@_K@Z @ 0x1801ABF2C
 * Callers:
 *     ?Create@CFlipContent@Flip@@SAJPEAVCFlipProducer@2@_KIPEAUFlipPropertyItem@@PEAPEAV12@@Z @ 0x1801AC04C (-Create@CFlipContent@Flip@@SAJPEAVCFlipProducer@2@_KIPEAUFlipPropertyItem@@PEAPEAV12@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Flip::CFlipContent *__fastcall Flip::CFlipContent::CFlipContent(
        Flip::CFlipContent *this,
        struct Flip::CFlipProducer *a2,
        __int64 a3)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &Flip::CFlipContent::`vftable';
  *((_QWORD *)this + 2) = a3;
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Flip::CFlipProducer *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
