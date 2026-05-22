/*
 * XREFs of ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x180061B74
 * Callers:
 *     ?RegisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@PEAVBamoDragManagerClientProxy@@@Z @ 0x18001A150 (-RegisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KW4InputGestureSo.c)
 * Callees:
 *     ??$_Try_emplace@AEBW4EdgyLocation@ShellEdgyRecognizer@@$$V@?$_Hash@V?$_Umap_traits@W4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@V?$_Uhash_compare@W4EdgyLocation@ShellEdgyRecognizer@@U?$hash@W4EdgyLocation@ShellEdgyRecognizer@@@std@@U?$equal_to@W4EdgyLocation@ShellEdgyRecognizer@@@4@@4@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBW4EdgyLocation@ShellEdgyRecognizer@@@Z @ 0x180012760 (--$_Try_emplace@AEBW4EdgyLocation@ShellEdgyRecognizer@@$$V@-$_Hash@V-$_Umap_traits@W4EdgyLocatio.c)
 *     ??$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@QEAAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU23@AEBU23@@Z @ 0x180012D54 (--$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@-$vector@UGestureRegistr.c)
 *     ?UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z @ 0x1800145E0 (-UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A8DC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1GestureRegistration@ShellGesturesProcessor@@QEAA@XZ @ 0x18001ACB4 (--1GestureRegistration@ShellGesturesProcessor@@QEAA@XZ.c)
 *     ??$IsShellClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180061800 (--$IsShellClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientPr.c)
 *     ??0GestureRegistration@ShellGesturesProcessor@@QEAA@AEBU01@@Z @ 0x18016E7DC (--0GestureRegistration@ShellGesturesProcessor@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ShellGesturesProcessor::RegisterGestureSource(
        ShellGesturesProcessor *a1,
        __int64 a2,
        int a3,
        int a4,
        struct DragManagerClientProxy *a5)
{
  struct DragManagerClientProxy *v9; // rsi
  int v10; // edi
  int v11; // edi
  __int64 v12; // rax
  _QWORD *v13; // rbx
  ShellGesturesProcessor::GestureRegistration *v14; // rax
  _BYTE v15[16]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  int v17; // [rsp+38h] [rbp-18h]
  struct DragManagerClientProxy *v18; // [rsp+40h] [rbp-10h]
  bool v19; // [rsp+48h] [rbp-8h]
  int v20; // [rsp+80h] [rbp+30h] BYREF

  v9 = a5;
  ShellGesturesProcessor::UnregisterGestureSource(a1, a2, a5);
  v18 = 0LL;
  v19 = 0;
  v16 = a2;
  if ( v9 )
  {
    a5 = v9;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&a5);
    v18 = v9;
  }
  v17 = a4;
  v19 = ShellGesturesProcessor::IsShellClient<DragManagerClientProxy>((__int64)a1, v9) == 0;
  if ( a3 )
  {
    v10 = a3 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
        {
          v20 = 0;
          goto LABEL_15;
        }
        v20 = 8;
      }
      else
      {
        v20 = 4;
      }
    }
    else
    {
      v20 = 2;
    }
  }
  else
  {
    v20 = 1;
  }
  v12 = std::_Hash<std::_Umap_traits<enum ShellEdgyRecognizer::EdgyLocation,std::vector<ShellGesturesProcessor::GestureRegistration>,std::_Uhash_compare<enum ShellEdgyRecognizer::EdgyLocation,std::hash<enum ShellEdgyRecognizer::EdgyLocation>,std::equal_to<enum ShellEdgyRecognizer::EdgyLocation>>,std::allocator<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>,0>>::_Try_emplace<enum ShellEdgyRecognizer::EdgyLocation const &,>(
          (__int64)a1 + 32,
          (__int64)v15,
          &v20);
  v13 = *(_QWORD **)v12;
  v14 = *(ShellGesturesProcessor::GestureRegistration **)(*(_QWORD *)v12 + 32LL);
  if ( v14 == (ShellGesturesProcessor::GestureRegistration *)v13[5] )
  {
    std::vector<ShellGesturesProcessor::GestureRegistration>::_Emplace_reallocate<ShellGesturesProcessor::GestureRegistration const &>(
      v13 + 3,
      v14,
      (__int64)&v16);
  }
  else
  {
    ShellGesturesProcessor::GestureRegistration::GestureRegistration(
      v14,
      (const struct ShellGesturesProcessor::GestureRegistration *)&v16);
    v13[4] += 32LL;
  }
LABEL_15:
  ShellGesturesProcessor::GestureRegistration::~GestureRegistration((ShellGesturesProcessor::GestureRegistration *)&v16);
}
