/*
 * XREFs of sub_14085A828 @ 0x14085A828
 * Callers:
 *     sub_1409FB4F4 @ 0x1409FB4F4 (sub_1409FB4F4.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x14041CC80 (ZwCreateDirectoryObject.c)
 *     sub_14085A8D8 @ 0x14085A8D8 (sub_14085A8D8.c)
 *     sub_14085A964 @ 0x14085A964 (sub_14085A964.c)
 *     sub_14085AB8C @ 0x14085AB8C (sub_14085AB8C.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS sub_14085A828()
{
  unsigned __int16 v0; // bx
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rax
  __int64 v4; // rdx
  unsigned __int16 v5; // ax
  ULONG Value; // [rsp+30h] [rbp+8h] BYREF
  ULONG v7; // [rsp+38h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v0 = -535;
  Value = 65001;
  v7 = 65001;
  result = ZwCreateDirectoryObject(&Handle, 0xF000Fu, (POBJECT_ATTRIBUTES)&stru_140A39B10);
  if ( result >= 0 )
  {
    ZwClose(Handle);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x58736C4Eu);
    if ( PoolWithTag )
    {
      PoolWithTag[1] = 0LL;
      *PoolWithTag = 0LL;
      v3 = sub_140347DB0();
      v3[132] = v4;
      if ( (int)sub_14085AB8C(&Value, &v7) < 0 )
      {
        v5 = -535;
      }
      else
      {
        v0 = Value;
        v5 = v7;
      }
      sub_14085A964(v0, v5);
      sub_14085A8D8();
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
