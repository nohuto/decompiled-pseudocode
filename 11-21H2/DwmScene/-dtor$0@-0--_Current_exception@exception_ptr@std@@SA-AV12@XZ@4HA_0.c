/*
 * XREFs of ?dtor$0@?0??_Current_exception@exception_ptr@std@@SA?AV12@XZ@4HA_0 @ 0x1801045F4
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall `std::exception_ptr::_Current_exception'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180010910(*(_QWORD *)(a2 + 64));
  }
  return result;
}
