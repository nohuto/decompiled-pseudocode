/*
 * XREFs of ??0ArrayBufferDesc@Engine@Spectre@@QEAA@IIIW4Format@12@W4Usage@12@@Z @ 0x18008B354
 * Callers:
 *     ??$make_unique@UArrayBufferDesc@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@23@AEAW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@0@AEAI00AEAW4Format@Engine@Spectre@@AEAW4Usage@34@@Z @ 0x180088704 (--$make_unique@UArrayBufferDesc@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@23@AEAW4Usage@23@$0A@@st.c)
 *     ??0VertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@QEAA@IIIW4Format@23@W4Usage@23@W4Attribute@123@@Z @ 0x1800894E4 (--0VertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@QEAA@IIIW4Format@23@W4Usage@23@W4Attribut.c)
 *     ??$make_unique@UArrayBufferDesc@Engine@Spectre@@AEAIAEBIAEAIAEAW4Format@23@AEAW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@0@AEAIAEBI0AEAW4Format@Engine@Spectre@@AEAW4Usage@34@@Z @ 0x18008B2CC (--$make_unique@UArrayBufferDesc@Engine@Spectre@@AEAIAEBIAEAIAEAW4Format@23@AEAW4Usage@23@$0A@@st.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ArrayBufferDesc::ArrayBufferDesc(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  *(_DWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 24) = a6;
  result = a1;
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  return result;
}
