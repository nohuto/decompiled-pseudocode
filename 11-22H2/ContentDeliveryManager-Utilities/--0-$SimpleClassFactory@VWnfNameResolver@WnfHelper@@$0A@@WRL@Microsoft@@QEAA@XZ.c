/*
 * XREFs of ??0?$SimpleClassFactory@VWnfNameResolver@WnfHelper@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1800789D4
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VWnfNameResolver@WnfHelper@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VWnfNameResolver@WnfHelper@@$0A@@12@@Z @ 0x18007880C (--$MakeAndInitialize@V-$SimpleClassFactory@VWnfNameResolver@WnfHelper@@$0A@@WRL@Microsoft@@V123@.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18006E094 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<WnfHelper::WnfNameResolver,0>::SimpleClassFactory<WnfHelper::WnfNameResolver,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<WnfHelper::WnfNameResolver,0>::`vftable';
  return result;
}
