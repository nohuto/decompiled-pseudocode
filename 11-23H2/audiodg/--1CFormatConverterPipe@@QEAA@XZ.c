/*
 * XREFs of ??1CFormatConverterPipe@@QEAA@XZ @ 0x140002834
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140002404 (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFormatConverterPipe::~CFormatConverterPipe(CFormatConverterPipe *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v2 )
    CoTaskMemFree(v2);
  ATL::CAutoPtr<CPipeInstance>::Free(this);
}
