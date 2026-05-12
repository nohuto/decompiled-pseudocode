/*
 * XREFs of sub_1C00226F8 @ 0x1C00226F8
 * Callers:
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C00226F8(int *a1, __int64 a2, __int64 a3)
{
  char v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  void (__fastcall *v6)(_QWORD); // rax

  v3 = a3;
  v4 = a2;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( *(_QWORD *)a1 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
        if ( v5 )
        {
          if ( a1[7] >= 3 && (v6 = *(void (__fastcall **)(_QWORD))(v5 + 240)) != 0LL )
          {
            v6(*(_QWORD *)a1);
          }
          else
          {
            LOBYTE(a3) = 1;
            LOBYTE(a2) = v3;
            KeFlushIoBuffers(v4, a2, a3);
          }
        }
      }
    }
  }
}
