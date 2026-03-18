/*
 * XREFs of ?InitializeReferenceTracker@@YA_NXZ @ 0x1C0055840
 * Callers:
 *     HmgCreate @ 0x1C0055348 (HmgCreate.c)
 * Callees:
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1C017A798 (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 */

char InitializeReferenceTracker(void)
{
  _QWORD *Pool2; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType **v1; // rdi
  unsigned int v2; // ebx
  unsigned int v3; // eax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType *v5; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(262LL, 16LL);
  if ( Pool2 )
  {
    Pool2[1] = Pool2;
    v1 = &qword_1C028F9B8;
    *Pool2 = Pool2;
    v2 = 0;
    gpReferenceTracker = Pool2;
    do
    {
      v3 = gReferenceTrackedTypes;
      if ( _bittest((const int *)&v3, v2) )
      {
        v5 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::Create(
               (struct _LIST_ENTRY *)gpReferenceTracker,
               *((_DWORD *)v1 - 2));
        if ( !v5 )
          return 0;
        *v1 = v5;
      }
      ++v2;
      v1 += 2;
    }
    while ( v2 < 3 );
    return 1;
  }
  else
  {
    gpReferenceTracker = 0LL;
    return 0;
  }
}
