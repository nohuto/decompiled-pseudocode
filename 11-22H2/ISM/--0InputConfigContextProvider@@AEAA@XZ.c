/*
 * XREFs of ??0InputConfigContextProvider@@AEAA@XZ @ 0x1800366C8
 * Callers:
 *     ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x18003762C (-Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0SystemContextProvider@@IEAA@XZ @ 0x18003A684 (--0SystemContextProvider@@IEAA@XZ.c)
 */

InputConfigContextProvider *__fastcall InputConfigContextProvider::InputConfigContextProvider(
        InputConfigContextProvider *this)
{
  InputConfigContextProvider *result; // rax

  SystemContextProvider::SystemContextProvider(this);
  *(_QWORD *)this = &InputConfigContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &InputConfigContextProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = "CMK:InputConfig";
  result = this;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  return result;
}
