/*
 * XREFs of sub_140508F00 @ 0x140508F00
 * Callers:
 *     sub_14051F5B0 @ 0x14051F5B0 (sub_14051F5B0.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_1403AE924 @ 0x1403AE924 (sub_1403AE924.c)
 *     sub_1403B0A04 @ 0x1403B0A04 (sub_1403B0A04.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050A93C @ 0x14050A93C (sub_14050A93C.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

void __noreturn sub_140508F00()
{
  unsigned int LockArray_high; // esi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  ULONG_PTR *v4; // rdi
  ULONG_PTR v5; // rbx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // eax

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  _disable();
  sub_1403B0A04(qword_140C54A88);
  sub_14051E038(0, 12, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 884);
  if ( !LockArray_high )
  {
    _InterlockedDecrement(&dword_140C0BB30);
    while ( _InterlockedExchangeAdd(&dword_140C0BB30, 0) )
      _mm_pause();
    KeStallExecutionProcessor(0x64u);
    v4 = (ULONG_PTR *)qword_140C4DE70;
    while ( v4 != &qword_140C4DE70 )
    {
      v5 = (ULONG_PTR)v4;
      v4 = (ULONG_PTR *)*v4;
      v6 = *(_DWORD *)(v5 + 232);
      if ( (v6 & 1) != 0 )
      {
        *(_DWORD *)(v5 + 232) = v6 & 0xFFFFFFFE;
        sub_1403AE924(v5, v3);
        if ( *(_QWORD *)(v5 + 176) && (v7 = sub_14042A5E0(*(_QWORD *)(v5 + 16), v3), v7 < 0) )
          sub_14051E038(v5, 35, v7, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3034);
        else
          *(_DWORD *)(v5 + 232) &= ~1u;
      }
    }
    KeStallExecutionProcessor(0x64u);
  }
  sub_14042A5E0(v2, v1);
  v9 = qword_140C54A88;
  if ( *(_QWORD *)(qword_140C54A88 + 168) )
  {
    v10 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v8);
    if ( v10 < 0 )
      sub_14051E038(v9, 34, v10, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3083);
  }
  sub_14050A93C(LockArray_high, (unsigned __int64)&dword_140C0BB30 & -(__int64)(LockArray_high != 0));
  JUMPOUT(0x140509054LL);
}
