/*
 * XREFs of IopInitializeReserveIrps @ 0x140B6DDB8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x140290050 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140C5DC20 = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, 42, 0);
  if ( IopReserveIrps )
  {
    dword_140C5DB48 = 0;
    qword_140C5DB60 = (__int64)&qword_140C5DB58;
    qword_140C5DB58 = (__int64)&qword_140C5DB58;
    word_140C5DB50 = 1;
    byte_140C5DB52 = 6;
    dword_140C5DB54 = 0;
    qword_140C5DB68 = (PIRP)IopAllocateIrpWithExtension(v1, 42, 0);
    if ( qword_140C5DB68 )
    {
      dword_140C5DB70 = 0;
      qword_140C5DB88 = (__int64)&qword_140C5DB80;
      qword_140C5DB80 = (__int64)&qword_140C5DB80;
      word_140C5DB78 = 1;
      byte_140C5DB7A = 6;
      dword_140C5DB7C = 0;
      qword_140C5DB90 = (PIRP)IopAllocateIrpWithExtension(v2, 42, 0);
      if ( qword_140C5DB90 )
      {
        dword_140C5DB98 = 0;
        stru_140C5DBA0.Header.WaitListHead.Blink = &stru_140C5DBA0.Header.WaitListHead;
        v4 = 0;
        stru_140C5DBA0.Header.WaitListHead.Flink = &stru_140C5DBA0.Header.WaitListHead;
        LOWORD(stru_140C5DBA0.Header.Lock) = 1;
        stru_140C5DBA0.Header.Size = 6;
        stru_140C5DBA0.Header.SignalState = 0;
        qword_140C5DC18 = 0LL;
        while ( 1 )
        {
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v3, 42, 0);
          v3 = (__int64)IrpWithExtension;
          if ( !IrpWithExtension )
            return 0;
          if ( !v4 )
            break;
          if ( v4 == 1 )
          {
            qword_140C5DBE8 = IrpWithExtension;
LABEL_11:
            ++v4;
          }
          else
          {
            ++v4;
            *(_QWORD *)&IrpWithExtension->Type = qword_140C5DC18;
            qword_140C5DC18 = IrpWithExtension;
            if ( v4 >= 8 )
            {
              dword_140C5DBC0 = 0;
              qword_140C5DBE0 = (__int64)&qword_140C5DBD8;
              result = 1;
              qword_140C5DBD8 = (__int64)&qword_140C5DBD8;
              stru_140C5DC00.Header.WaitListHead.Blink = &stru_140C5DC00.Header.WaitListHead;
              stru_140C5DC00.Header.WaitListHead.Flink = &stru_140C5DC00.Header.WaitListHead;
              dword_140C5DBF0 = 0;
              qword_140C5DBC8 = 0LL;
              qword_140C5DBF8 = 0LL;
              word_140C5DBD0 = 1;
              byte_140C5DBD2 = 6;
              dword_140C5DBD4 = 0;
              LOWORD(stru_140C5DC00.Header.Lock) = 1;
              stru_140C5DC00.Header.Size = 6;
              stru_140C5DC00.Header.SignalState = 0;
              return result;
            }
          }
        }
        Irp = IrpWithExtension;
        goto LABEL_11;
      }
    }
  }
  return 0;
}
